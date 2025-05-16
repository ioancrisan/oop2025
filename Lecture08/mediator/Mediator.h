//
// Created by IoanCrisan on 04.04.2025.
//

#ifndef MEDIATOR_H
#define MEDIATOR_H
#include <map>
#include <memory>
#include <string>

#include "IRequest.h"
#include "IRequestHandler.h"

using namespace std;

namespace mediator {
    /**
     * The Mediator class is responsible for handling requests and coordinating communication between different
     * components or objects. It acts as an intermediary, allowing objects to interact without needing to know
     * the details of each other's implementation.
     */
    class Mediator {
    public:
        /**
         * The Handle method processes incoming requests and delegates them to the appropriate request handler.
         * @param request The request to be handled.
         * @return A pointer to the result of the request handling.
         */
        shared_ptr<IResponse> Handle(const shared_ptr<IRequest> &request);

        /**
         * The RegisterHandler method registers a request handler for a specific request type.
         * @param name The name of the request type.
         * @param handler The request handler to be registered.
         */
        void RegisterHandler(const string& name, const shared_ptr<IRequestHandler> &handler);

    private:
        map<string, shared_ptr<IRequestHandler>> handlers;
    };
}


#endif //MEDIATOR_H
