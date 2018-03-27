#include "device.h"

Device::Device(): Abstract()
{
    double W;
    cout << "Set device weight:" << endl;
    cin >> W;
    weight = W;
}

Device::Device(char *N, char *I, double W): Abstract(N, I)
{
    weight = W;
}

void Device::setMeasure()
{
    char n[100];
    double downLimit, upLimit, error;
    cout <<  "Set measurement name:" << endl;
    cin >> n;
    cout << "Set downlimit:" << endl;
    cin >> downLimit;
    cout << "Set uplimit:" << endl;
    cin >> upLimit;
    cout << "Set error:" << endl;
    cin >> error;
    Measurement me(n, downLimit, upLimit, error);
    measure.push_back(me);
}

void Device::setMeasure(char *n, double dL, double uL, double e)
{
    Measurement me(n, dL, uL, e);
    measure.push_back(me);
}

void Device::printAll()
{
    Abstract::printAll();
    cout << "Weight : " << weight << endl;
    cout << "Measurements: " << endl;
    size_t size = measure.size();
    for(size_t i = 0; i < size; i++)
    {
        cout << endl;
        measure[i].print();
    }
}

void Device::printMeasure(int num)
{
    measure[num].print();
}

double Device::getWeight()
{
    return weight;
}

Measurement Device::getMeasure(int num)
{
    Measurement temp = measure[num];
    return temp;
}

Device::~Device()
{
    measure.erase(measure.begin(), measure.end());
}
