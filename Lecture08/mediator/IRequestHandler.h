//
// Created by IoanCrisan on 11.04.2025.
//

#ifndef IREQUESTHANDLER_H
#define IREQUESTHANDLER_H
#include "IRequest.h"
#include "IResponse.h"

using namespace std;

namespace mediator {

class IRequestHandler {
public:
    /**
     * Handle the request
     * @param request the request to handle
     * @return the result of handling the request
     */
    virtual shared_ptr<IResponse> Handle(shared_ptr<IRequest> request) = 0; // pure virtual function (abstract class)

    virtual ~IRequestHandler() = default;
};

} // mediator

#endif //IREQUESTHANDLER_H
