#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef objectChef("Gordon Ramsay");
    objectChef.makeSalad();
    objectChef.makeSoup();

    ItalianChef objectIChef("Anthony Bourdain");
    objectIChef.makeSalad();
    objectIChef.makeSoup();
    objectIChef.makePasta();
    cout <<"name of the Italian Chef is "+ objectIChef.getName()<<endl;
    return 0;
}
