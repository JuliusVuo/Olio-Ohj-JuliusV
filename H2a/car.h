#ifndef CAR_H
#define CAR_H

#include <string>

using namespace std;

class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car(string, string, int);
    void printData();
    void setBrand(string);
    void setModel(string);
    void setYearModel(int);
};

#endif // CAR_H
