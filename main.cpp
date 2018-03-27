#include "deviceextended.h"

int main()
{
    //Abstract abs();

    //Device dev;

    DeviceExtended dev;
    char ans[10];
    while(1)
    {
    cout << "Would you like to add measurement? (y/n)" << endl;
    cin >> ans;
    if(strcmp(ans, "y"))break;
    dev.setMeasure();
    }
    dev.printAll();


    /*char *n = new char[20];
    strcpy(n, "Example_measurement");
    Measurement m(n , 10, 100, 20);
    m.print();*/



    return 0;
}
