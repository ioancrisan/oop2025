//
// Created by IoanCrisan on 16.05.2025.
//

#include "Person.h"

namespace model {
    const std::string &Person::getName() const {
        return name;
    }

    void Person::setName(const std::string &newName) {
        name = newName;
    }

    int Person::getAge() const {
        return age;
    }

    void Person::setAge(int newAge) {
        age = newAge;
    }

    int Person::getId() const {
        return id;
    }

    void Person::setId(int newId) {
        id = newId;
    }
} // namespace model
