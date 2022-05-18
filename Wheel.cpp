//
// Created by Andrei on 13/05/2022.
//

#include "Wheel.h"

Wheel::Wheel(Wheel *pWheel) {

}

void Wheel::ModifyPressure(double dPressureDifference) {
    Pressure += dPressureDifference;

}

Wheel::Wheel(double diameter, double pressure, double depth) : Diameter(diameter), Pressure(pressure), Depth(depth) {}

double Wheel::getDiameter() const {
    return Diameter;
}

void Wheel::setDiameter(double diameter) {
    Diameter = diameter;
}

double Wheel::getPressure() const {
    return Pressure;
}

void Wheel::setPressure(double pressure) {
    Pressure = pressure;
}

double Wheel::getDepth() const {
    return Depth;
}

void Wheel::setDepth(double depth) {
    Depth = depth;
}

Wheel::Wheel(Wheel &wheel) : Diameter(wheel.getDiameter()), Pressure(wheel.getPressure()), Depth(wheel.Depth) {

}

Wheel::Wheel() {}

std::ostream &operator<<(std::ostream &os, const Wheel &wheel) {
    os << "Diameter: " << wheel.Diameter << " Pressure: " << wheel.Pressure << " Depth: " << wheel.Depth;
    return os;
}
