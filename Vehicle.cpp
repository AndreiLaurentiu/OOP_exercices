//
// Created by Andrei on 13/05/2022.
//

#include "Vehicle.h"

Vehicle::Vehicle(const std::string &maxSpeed) {
    MaxSpeed = maxSpeed;
}

const std::string &Vehicle::getMaxSpeed() const {
    return MaxSpeed;
}


