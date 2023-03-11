//
#include "question4.h"

bool test_config()
{
    return true;
}

bool is_palindrome(const string &parameter)
{
    string reversed_string;

    for (int i = parameter.length() - 1; i >= 0; i--)
    {
        reversed_string += parameter[i];
    }

    for (int i = parameter.length() - 1; i >= 0; i--)
    {
        if (reversed_string == parameter)
            return true;
        else
            return false;
    }
}