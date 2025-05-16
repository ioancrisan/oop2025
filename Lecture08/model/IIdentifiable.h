//
// Created by IoanCrisan on 16.05.2025.
//

#ifndef IIDENTIFIABLE_H
#define IIDENTIFIABLE_H

namespace model {

class IIdentifiable {
public:
    virtual int getId() const = 0;
};

} // model

#endif //IIDENTIFIABLE_H
