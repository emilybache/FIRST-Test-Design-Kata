#include <stdio.h>
#include <limits.h>

#include "sample.h"

bool isLeapYear(int year)
{
    return year % 4 == 0;
}

void fizzBuzz(char* result, int n)
{
    if (n % 3 == 0)
        sprintf(result, "Fizz");
    else
        sprintf(result, "%d", n);
}

int closestToZero(int input[], int inputLength)
{
    int min = INT_MAX;
    for (int i = 1; i < inputLength; i++)
    {
        if (input[i] < min)
        {
            min = input[i];
        }
    }

    return min;
}
