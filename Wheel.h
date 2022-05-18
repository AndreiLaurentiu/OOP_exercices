//
// Created by Andrei on 13/05/2022.
//

#ifndef UNTITLED2_WHEEL_H
#define UNTITLED2_WHEEL_H


#include <ostream>

class Wheel {
private:
    double Diameter;
    double Pressure;
    double Depth;
public:
    Wheel(double diameter, double pressure, double depth);

    Wheel(Wheel &wheel);

    Wheel(Wheel *pWheel);

    void ModifyPressure(double dPressureDifference);

    double getDiameter() const;

    void setDiameter(double diameter);

    double getPressure() const;

    void setPressure(double pressure);

    double getDepth() const;

    void setDepth(double depth);

    Wheel();

    friend std::ostream &operator<<(std::ostream &os, const Wheel &wheel);
};


#endif //UNTITLED2_WHEEL_H
