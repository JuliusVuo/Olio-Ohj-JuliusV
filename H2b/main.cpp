#include <car.h>
#include <vector>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<vector<Car>> carList = make_unique<vector<Car>>();

    Car objectCar0("BMW","Series 3",2018);
    Car objectCar1("Toyota","Corolla",2011);
    Car objectCar2("Audi","A1", 2012);

    carList->push_back(objectCar0);
    carList->push_back(objectCar1);
    carList->push_back(objectCar2);

    vector<Car>& cars = *carList;

    cars[1].printData();

    for(int x=0; x<=2; x++){
        cars[x].printData();
    }
    return 0;
}
