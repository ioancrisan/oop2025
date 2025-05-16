//
// Created by IoanCrisan on 11.04.2025.
//

#ifndef IRESPONSE_H
#define IRESPONSE_H

namespace mediator {
    /// The IResponse interface is used to mark the response of a request
    class IResponse {
    public:
        virtual ~IResponse() = default;
    };
} // mediator

#endif //IRESPONSE_H
