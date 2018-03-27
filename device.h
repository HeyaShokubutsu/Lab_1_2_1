#ifndef DEVICE_H
#define DEVICE_H

#include <vector>
#include "measurement.h"
#include "abstract.h"

class Device : public Abstract
{
    double weight;
    std::vector<Measurement> measure;
public:
    Device();
    Device(char *N, char *I, double W);
    void setWeight(double W);
    void setMeasure();
    void setMeasure(char *n, double dL, double uL, double e);
    void printAll();
    void printMeasure(int num);
    double getWeight();
    Measurement getMeasure(int num);

    ~Device();
};

#endif // DEVICE_H
