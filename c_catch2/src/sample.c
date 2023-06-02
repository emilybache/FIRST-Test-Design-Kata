#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#include "sample.h"

bool isLeapYear(int year)
{
    if (year % 400 == 0)
        return true;
    if (year % 100 == 0)
        return false;
    return year % 4 == 0;
}

void fizzBuzz(char* result, int n)
{
    if (n % 15 == 0)
        sprintf(result, "FizzBuzz");
    else if (n % 3 == 0)
        sprintf(result, "Fizz");
    else if (n % 5 == 0)
        sprintf(result, "Buzz");
    else
        sprintf(result, "%d", n);
}

int closestToZero(int input[], int inputLength)
{
    int min = INT_MAX;
    for (int i = 1; i < inputLength; i++)
    {
        if (abs(input[i]) < abs(min))
        {
            min = input[i];
        }
    }

    return min;
}
