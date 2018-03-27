#ifndef MEASUREMENT_H
#define MEASUREMENT_H

#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Measurement
{
    char name[100];
    double downLimit, upLimit, error;
public:
    Measurement(char* n, double dL, double uL, double e);
    void print();
    ~Measurement();
};
#endif // MEASUREMENT_H
