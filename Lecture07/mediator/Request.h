//
// Created by IoanCrisan on 04.04.2025.
//

#ifndef REQUEST_H
#define REQUEST_H
#include "IRequest.h"

using namespace std;

namespace mediator {
    class Request : public IRequest {
    public:
        Request(const string &name): name(name) {
        }

        string getName() override;

    private:
        string name;
    };
}
#endif //REQUEST_H
