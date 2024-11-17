#include <iostream>
#include <memory>
#include <car.cpp>
#include <rectangle.h>
#include <student.h>

int main()
{
    Car newCar("BMW","X7",2018);
    newCar.printData();

    Rectangle *newRectangle = new Rectangle(21.06,12.7);
    cout <<"Pinta-ala on: " <<newRectangle->getArea()<<endl<<"Ympärysmitta on: " <<newRectangle->getCircum()<< endl<<endl;

    delete newRectangle;
    newRectangle = nullptr;

    unique_ptr<Student> newStudent = make_unique<Student>("Erkki Esimerkki", 123456, 4.25);
    cout << "Nimi: " + newStudent->getName()<<endl<< "Opiskelijanumero: "<< newStudent->getStudentNumber()<<endl<<"Keskiarvo: "<<newStudent->getAverage()<<endl;
}
