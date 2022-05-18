#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main() {
    std::cout << "Welcome to your local vehicle rental shop!" << std::endl;
    std::cout << "Today we have on display our new cars and trucks for rental! Take a look and choose:" << std::endl;
    Wheel wheels[2] = {new Wheel(1.2 ,1.5, 2.4), new Wheel(2.4, 3.0, 5)};
    Wheel wheelsForCars[4] = {new Wheel(wheels[0]), new Wheel(wheels[0]), new Wheel(wheels[0]), new Wheel(wheels[0])};
    std::vector<std::shared_ptr<Wheel>> wheelsForTrucks;
    wheelsForTrucks.reserve(4);
for(int i = 0; i <4; i++)
        wheelsForTrucks.push_back(static_cast<const std::shared_ptr<Wheel>>(new Wheel(wheels[1])));
    Car* cars[3] = {new Car("200km/h", wheelsForCars,
                   2.5, 6, 3.8),
                   new Car("150km/h", wheelsForCars,
                                          2.5, 6, 3.8),
                   new Car("120km/h", wheelsForCars,
                           2.5, 6, 3.8),
                   };
    Truck* trucks[3] = {new Truck("100km/h", wheelsForTrucks, 2.7, 8, 3.9),
                        new Truck("150km/h", wheelsForTrucks, 2.7, 8, 3.9),
                        new Truck("80km/h", wheelsForTrucks, 2.7, 8, 3.9)};
    for(auto & car : cars)
        std::cout<< *car << std::endl;
    for(int i=0 ; i<3; i++)
        std::cout<< *trucks[i] << std::endl;

    for(int i=0 ; i<3; i++)
        delete cars[i];
    for(int i=0 ; i<3; i++)
        delete trucks[i];

    return 0;
}
