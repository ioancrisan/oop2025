//
// Created by IoanCrisan on 04.04.2025.
//

#ifndef MEDIATOR_H
#define MEDIATOR_H
#include <string>

using namespace std;

namespace mediator {
    class IHandler {
    public:
        virtual void Handle(IRequest *request) = 0;
    };

    /**
     * The Mediator class is responsible for handling requests and coordinating communication between different
     * components or objects. It acts as an intermediary, allowing objects to interact without needing to know
     * the details of each other's implementation.
     */
    class Mediator {
    public:
        void Handle(IRequest *request) {
            // Handle the request
            // ...
        }
    };
}


#endif //MEDIATOR_H
