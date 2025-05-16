//
// Created by IoanCrisan on 16.05.2025.
//

#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <memory>

#include "Repository.h"
#include "model/Person.h"


class Controller {
public:
    explicit Controller(const std::shared_ptr<Repository<model::Person>>& personRepo)
        : personRepository(personRepo) {}

private:
    std::shared_ptr<Repository<model::Person>> personRepository;
};



#endif //CONTROLLER_H
