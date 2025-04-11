cmake_minimum_required(VERSION 3.30)
project(Lecture04)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lecture04 main.cpp
        geometry/Rectangle.cpp
        geometry/Rectangle.h
        geometry/Point.h
        geometry/Square.cpp
        geometry/Square.h
        geometry/Circle.cpp
        geometry/Circle.h
        geometry/Shape.cpp
        geometry/Shape.h
        geometry/Diamond.cpp
        geometry/Diamond.h
        mediator/Mediator.cpp
        mediator/Mediator.h
        mediator/IRequest.h
        mediator/Request.cpp
        mediator/Request.h
        mediator/IRequestHandler.h
        geometry/mediator/CalculateAreaRequest.cpp
        geometry/mediator/CalculateAreaRequest.h
        geometry/mediator/CalculateAreaRequestHandler.cpp
        geometry/mediator/CalculateAreaRequestHandler.h
        geometry/Area.cpp
        geometry/Area.h
        mediator/IResponse.h
)
