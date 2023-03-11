#include "question2.h"

bool test_config()
{
    return true;
}

int get_fib_sequence(int value)
{
    int num1 = 0, num2 = 1, nextNum = 0;

    for (int i = 1; i <= value; i++)
    {
        num1 = num2;
        num2 = nextNum;
        nextNum = num1 + num2;
    }
    return nextNum;
}