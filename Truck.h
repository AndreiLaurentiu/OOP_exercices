//
// Created by Andrei on 13/05/2022.
//

#ifndef UNTITLED2_TRUCK_H
#define UNTITLED2_TRUCK_H


#include "Vehicle.h"
#include "Wheel.h"
#include <vector>
#include <memory>
#include <ostream>

class Truck : public Vehicle {
private:
    std::vector<std::shared_ptr<Wheel>> wheels;
    double CylindricCapacity;
    int PassengersNo;
    double Weight;
public:
    void AddWheel(std::shared_ptr<Wheel> wheel);
    void InsertWheel(int nIndex, std::shared_ptr<Wheel> wheel);
    void DeleteWheel(int nIndex);

    Truck(const std::string &maxSpeed, std::vector<std::shared_ptr<Wheel>> wheels, double CylindricCapacity, int PassengersNo, double Weight);

    friend std::ostream &operator<<(std::ostream &os, const Truck &truck);
};


#endif //UNTITLED2_TRUCK_H
