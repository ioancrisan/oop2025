//
// Created by IoanCrisan on 16.05.2025.
//

#ifndef PERSON_H
#define PERSON_H
#include <string>

#include "IIdentifiable.h"

namespace model {
    class Person : public IIdentifiable {
    private:
        std::string name;
        int age;
        int id;

    public:
        const std::string &getName() const;
        void setName(const std::string &newName);

        int getAge() const;
        void setAge(int newAge);

        int getId() const override;
        void setId(int newId);
    };
} // model

#endif //PERSON_H
