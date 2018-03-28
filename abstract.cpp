#include "abstract.h"

Abstract::Abstract()
{
    char buf[100];
    cout << "Set device name:" << endl;
    cin >> buf;
    name = new char[strlen(buf) + 1];
    strcpy(name, buf);
    cout << "Set device instance:" << endl;
    cin >> buf;
    instance = new char[strlen(buf) + 1];
    strcpy(instance, buf);
}

Abstract::Abstract(char *n, char *i)
{
    //cout << "ABSTRACT CONSTRUCTOR" << endl;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    instance = new char[strlen(i) + 1];
    strcpy(instance, i);
}

void Abstract::setName(char *n)
{
    strcpy(name, n);
}

void Abstract::setInstance(char *i)
{
    strcpy(instance, i);
}

char *Abstract::getName()
{
    char temp[sizeof(name) + 1];
    strcpy(temp, name);
    return temp;
}

char *Abstract::getInstance()
{
    char temp[sizeof(instance) + 1];
    strcpy(temp, instance);
    return temp;
}

void Abstract::printAll()
{
    cout << "Device " << name << " ----------" << endl;
    cout << "Instance: " << instance << endl;
}

Abstract::~Abstract()
{
    delete name;
    delete instance;
    //cout << "ABSTRACT DESTRUCTOR" << endl;
}
