cmake_minimum_required(VERSION 3.30)
project(Lecture08)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lecture08 main.cpp
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
        Repository.h
        Controller.cpp
        Controller.h
        model/Person.cpp
        model/Person.h
        VectorRepository.h
        DbRepository.h
        model/IIdentifiable.h
)
