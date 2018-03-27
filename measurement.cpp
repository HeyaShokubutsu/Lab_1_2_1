#include "measurement.h"

Measurement::Measurement(char *n, double dL, double uL, double e)
{
    strcpy(name, n);
    downLimit = dL;
    upLimit = uL;
    error = e;
}

void Measurement::print()
{
    cout << "Name: " << name << endl;
    cout << "DownLimit: " << downLimit << endl;
    cout << "UpLimit: " << upLimit << endl;
    cout << "Error: " << error << endl;
}

Measurement::~Measurement()
{

}
