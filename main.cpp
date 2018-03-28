#include "deviceextended.h"

int main()
{
    char *n = new char[20];
    char *m = new char[20];
    strcpy(n, "Example_device");
    strcpy(m, "Example_instance");

    //Abstract abs();

    //Device dev;

    //Device dev1(n, m, 100);

    //DeviceExtended dev1(n, m, 100, 1000);

    /*
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
    */

    /*
    DeviceExtended devarr[3];
    for(int i = 0; i < 3; i++)
    {
        devarr[i].printAll();
    }
    */

    /*
    strcpy(n, "Example_measurement");
    Measurement m(n , 10, 100, 20);
    m.print();
    */

    delete n;
    delete m;

    return 0;
}

/*
Device_o
Instace_o
100
Measurement_o
10
100
0.1
1000
*/
