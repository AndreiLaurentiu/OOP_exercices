//
// Created by Andrei on 13/05/2022.
//

#include "Truck.h"

#include <utility>

void Truck::AddWheel(std::shared_ptr<Wheel> wheel) {
    wheels.push_back(wheel);

}

void Truck::InsertWheel(int nIndex, std::shared_ptr<Wheel> wheel) {
    wheels.insert(wheels.begin() + nIndex, wheel);
}

void Truck::DeleteWheel(int nIndex) {
    wheels.erase(wheels.begin() + nIndex);

}

Truck::Truck(const std::string &maxSpeed, std::vector<std::shared_ptr<Wheel>> wheels, double CylindricCapacity, int PassengersNo, double Weight) :
Vehicle(maxSpeed), wheels(std::move(wheels)), CylindricCapacity(CylindricCapacity), PassengersNo(PassengersNo), Weight(Weight) {}

std::ostream &operator<<(std::ostream &os, const Truck &truck) {
    os << truck.getMaxSpeed() << " wheels: ";
    for(std::shared_ptr<Wheel> wheel : truck.wheels)
        os << *wheel << " ";
    os << std::endl << " CylindricCapacity: "
       << truck.CylindricCapacity << " PassengersNo: " << truck.PassengersNo << " Weight: " << truck.Weight;
    return os;
}

