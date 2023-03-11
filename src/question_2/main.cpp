#include<iostream>
#include "question2.h"

using std::cout; using std::cin;

int main()
{
    int num;
    auto option = 'y';

    cout<<"Fibonacci Number Generator\n";

    while(option == 'y')
    {
        cout<<"Enter a number in the range of 1-15: ";
        cin>>num;

        while (num < 1 || num > 15)
        {
            cout<<"Please enter a number in the range of 1-15: ";
            cin>>num;
        }

        cout<<"\nFibonacci Number: "<<get_fib_sequence(num)<<"\n\n";

        cout<<"Would you like to enter another number? Enter y for yes or n for no: ";
        cin>>option;
    }

    return 0;
}