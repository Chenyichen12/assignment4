//
// Created by chen_yichen on 2024/3/26.
//

#include "ZooKeeper.h"

void ZooKeeper::cleanEnclosure() {

    auto iter = openDate.begin();
    while(iter!= openDate.end()){
        iter->second++;
        if (iter->second == 1) {
            auto tep = iter;
            tep->first->changeEnclosureState(OPEN);
            iter++;
            openDate.erase(tep);
            continue;
        }
        iter++;
    }

    bool ifClear = false;
    for (auto &item: this->manage) {
        if (item->ifOverDirt()) {
            ifClear = true;
            item->changeEnclosureState(CLOSE);
            item->clearAllDirt();
            openDate.emplace_back(item.get(), 0);
        }
    }
    if (ifClear)
        this->workDay++;
}

ZooKeeper::ZooKeeper(const std::string &name, int age, const std::vector<std::shared_ptr<AnimalEnclosure>> &manage)
        : Person(name, age), manage(manage) {
    this->workDay = 0;
}
