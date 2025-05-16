//
// Created by IoanCrisan on 16.05.2025.
//

#ifndef VECTORREPOSITORY_H
#define VECTORREPOSITORY_H

#include <vector>
#include <algorithm>
#include <functional>
#include <memory>

#include "Repository.h"

using namespace std;

template<typename TItem>
class VectorRepository : public Repository<TItem> {
public:
    vector<shared_ptr<TItem>> Query(const function<bool(const shared_ptr<TItem>&)>& predicate) const override {
        if (!predicate) {
            return items;
        }

        vector<shared_ptr<TItem>> result;
        for (auto i: items) {
            if (predicate(i)) {
                result.push_back(i);
            }
        }

        return result;
    }

    void Add(const shared_ptr<TItem>& item) override {
        items.push_back(item);
    }

    void Remove(const shared_ptr<TItem>& item) override {
        items.erase(remove(items.begin(), items.end(), item), items.end());
    }

    void Update(const shared_ptr<TItem>& item) override {
        auto it = find(
            items.begin(),
            items.end(),
            [item] (const shared_ptr<TItem>& i) {
                return i->getId() == item->getId();
            });
        if (it != items.end()) {
            *it = item;
        }
    }

private:
    vector<shared_ptr<TItem>> items;
};

#endif //VECTORREPOSITORY_H
