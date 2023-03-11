#include "question1.h"
#include<iomanip>
#include<cmath>

using std::setprecision; using std::round;

bool test_config()
{
    return true;
}

double get_dna_p_distance(const string &parameter1, const string &parameter2)
{
    double accumulator = 0.0;

    for (int i = 0; i <= parameter1.length(); i++)
    {
        if (parameter1[i] != parameter2[i])
        {
            accumulator++;
        }    
    }

    double p_distance = round((accumulator / parameter1.length()) * 10000) / 10000;

    return p_distance;
}