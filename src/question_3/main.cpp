#include<iostream>
#include"question3.h"

using std::cout; using std::cin;

int main()
{
    double mass, velocity;
    auto option = 'y';

    cout<<"Kinetic Energy Generator\n";

    while(option == 'y')
    {
        cout<<"Enter mass (kilograms): ";
        cin>>mass;
        cout<<"Enter velocity (meters per second): ";
        cin>>velocity;

        while (mass < 0 || velocity < 0)
        {
            if (mass < 0)
            {
                cout<<"Mass must be a positive number: ";
                cin>>mass;
            }
            else if (velocity < 0)
            {
                cout<<"Velocity must be a positive number: ";
                cin>>velocity;
            }    
            
        }

        cout<<"\nKinetic Energy: "<<get_kinetic_energy(mass, velocity)<<" J\n\n";

        cout<<"Would you like to find another object's kinetic energy? Enter y for yes or n for no: ";
        cin>>option;
    }

    return 0;
}