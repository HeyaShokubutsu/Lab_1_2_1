#ifndef DEVICEEXTENDED_H
#define DEVICEEXTENDED_H

#include "device.h"

class DeviceExtended: public Device
{
    double cost;
public:
    DeviceExtended();
    DeviceExtended(char *N, char *I, double W, double C);
    void setCost(double C);
    void printAll();
    double getCost();

    ~DeviceExtended();
};

#endif // DEVICEEXTENDED_H
