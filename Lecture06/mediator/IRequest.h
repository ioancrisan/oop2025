//
// Created by IoanCrisan on 04.04.2025.
//

#ifndef IREQUEST_H
#define IREQUEST_H
#include <string>

namespace mediator {
    /**
     * Mediator pattern is a behavioral design pattern that allows objects to communicate with each other without
     * knowing each other's details. It defines an object that encapsulates how a set of objects interact.
     * This pattern promotes loose coupling by keeping objects from referring to each other explicitly, and it lets you
     * vary their interaction independently.
     */
    class IRequest {
    public:
        virtual std::string getName() = 0;
    };
} // mediator

#endif //IREQUEST_H
