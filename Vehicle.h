//
// Created by Andrei on 13/05/2022.
//

#ifndef UNTITLED2_VEHICLE_H
#define UNTITLED2_VEHICLE_H

#include <string>
#include <ostream>

class Vehicle {
private:
    std::string MaxSpeed;
public:
    Vehicle(const std::string &maxSpeed);

    friend std::ostream &operator<<(std::ostream &os, const Vehicle &vehicle);

    const std::string &getMaxSpeed() const;


};


#endif //UNTITLED2_VEHICLE_H
