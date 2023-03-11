#include "question3.h"
#include <cmath>

using std::pow;

bool test_config()
{
    return true;
}

double get_kinetic_energy(double mass, double velocity)
{
    double kinetic_energy = (mass * pow(velocity, 2)) / 2;

    return kinetic_energy;
}