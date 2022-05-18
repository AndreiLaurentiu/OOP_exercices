//
// Created by Andrei on 13/05/2022.
//

#include "Car.h"

Car::Car(const std::string &maxSpeed, Wheel wheels[], double CylindricCapacity, int PassengersNo, double Weight) : Vehicle(maxSpeed), CylindricCapacity(CylindricCapacity),
PassengersNo(PassengersNo), Weight(Weight) {
    for(int i = 0; i <whellNr ; i++)
        this -> wheels[i] = wheels[i];
}

std::ostream &operator<<(std::ostream &os, const Car &car) {
    os << car.getMaxSpeed() << " wheels: ";
    for(auto &  wheel : car.wheels)
        os << wheel << " ";
    os << std::endl << " CylindricCapacity: "
       << car.CylindricCapacity << " PassengersNo: " << car.PassengersNo << " Weight: " << car.Weight;
    return os;
}
