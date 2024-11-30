#include "engine.h"

Engine::Engine() {}

Engine::Engine(int hp, double disp)
{
    setHorsepower(hp);
    setDisplacement(disp);
}

int Engine::getHorsepower()
{
    return horsepower;
}

void Engine::setHorsepower(int value)
{
    horsepower = value;
}

double Engine::getDisplacement()
{
    return displacement;
}

void Engine::setDisplacement(double value)
{
    displacement = value;
}
