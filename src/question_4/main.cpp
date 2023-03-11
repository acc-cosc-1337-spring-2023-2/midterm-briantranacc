#include<iostream>
#include "question4.h"

using std::cout; using std::cin; using std::boolalpha;

int main()
{
    string palindrome;

    auto option = 'y';

    while(option == 'y')
    {
        cout<<"Enter a word to determine if it is a palindrome: ";
        cin>>palindrome;

        bool result = is_palindrome(palindrome);
        cout<<"\n"<<boolalpha<<result<<"\n\n";

        cout<<"Would you like to find another palindrome? Enter y for yes or n for no: ";
        cin>>option;
    }

    return 0;
}