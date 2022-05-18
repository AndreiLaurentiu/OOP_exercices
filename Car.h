//
// Created by Andrei on 13/05/2022.
//

#ifndef UNTITLED2_CAR_H
#define UNTITLED2_CAR_H


#include "Vehicle.h"
#include "Wheel.h"
#include <vector>
#include <memory>
#include <ostream>

class Car : public Vehicle {
private:
    static const int whellNr = 4;
    Wheel wheels[whellNr];
    double CylindricCapacity;
    int PassengersNo;
    double Weight;
public:
    Car(const std::string &maxSpeed, Wheel wheels[], double CylindricCapacity, int PassengersNo, double Weight);

    friend std::ostream &operator<<(std::ostream &os, const Car &car);
};


#endif //UNTITLED2_CAR_H
