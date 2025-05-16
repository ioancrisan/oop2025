//
// Created by IoanCrisan on 16.05.2025.
//

#ifndef REPOSITORY_H
#define REPOSITORY_H
#include <functional>
#include <concepts>
using namespace std;

#include "model/IIdentifiable.h"

template<typename TItem>
requires derived_from<TItem, model::IIdentifiable>
class Repository {
public:
    virtual vector<shared_ptr<TItem>> Query(
        const function<bool(const shared_ptr<TItem>&)>& predicate = nullptr) const = 0;

    virtual void Add(const shared_ptr<TItem>& item) = 0;

    virtual void Remove(const shared_ptr<TItem>& item) = 0;

    virtual void Update(const shared_ptr<TItem>& item) = 0;

    virtual ~Repository() = default;
};



#endif //REPOSITORY_H
