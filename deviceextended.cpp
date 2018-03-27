#include "deviceextended.h"

DeviceExtended::DeviceExtended() : Device()
{
    double C;
    cout << "Set device cost: " << endl;
    cin >> C;
    cost = C;
}

DeviceExtended::DeviceExtended(char *N, char *I, double W, double C) : Device(N, I, W)
{
    cost = C;
}

void DeviceExtended::setCost(double C)
{
    cost = C;
}

void DeviceExtended::printAll()
{
    Device::printAll();
    cout << endl;
    cout << "Cost: " << cost;
    cout << endl;
}

double DeviceExtended::getCost()
{
    return cost;
}

DeviceExtended::~DeviceExtended()
{

}
