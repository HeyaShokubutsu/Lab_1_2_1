#ifndef ABSTRACT_H
#define ABSTRACT_H

#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

class Abstract
{
    char *name;
    char *instance;
public:
    Abstract();
    Abstract(char *n, char *i);
    void setName(char *n);
    void setInstance(char *i);
    char* getName();
    char* getInstance();
    virtual void printAll();
    virtual void setMeasure() {}
    virtual void setMeasure(char *, double, double, double) {}
    virtual ~Abstract() = 0;

};

#endif // ABSTRACT_H
