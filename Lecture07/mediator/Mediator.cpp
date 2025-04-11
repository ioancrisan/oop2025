//
// Created by IoanCrisan on 04.04.2025.
//

#include "Mediator.h"

shared_ptr<mediator::IResponse> mediator::Mediator::Handle(const shared_ptr<IRequest> &request) {
    // Handle the request
    if (request == nullptr) {
        __throw_invalid_argument("Request is null");
    }

    return handlers[request->getName()]->Handle(request);
}

void mediator::Mediator::RegisterHandler(const string &name, const shared_ptr<IRequestHandler> &handler) {
    // Register the handler for the request
    if (handler == nullptr) {
        __throw_invalid_argument("Request handler is null");
    }

    handlers[name] = handler;
}
