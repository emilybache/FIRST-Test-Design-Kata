#include "sample.h"

bool isLeapYear(int year)
{
    return year % 4 == 0;
}

string fizzBuzz(int n)
{
    if (n % 3 == 0)
        return "Fizz";
    return to_string(n);
}

int closestToZero(vector<int> *numbers)
{
    int min = numbers->at(0);
    for(unsigned int i = 0; i < numbers->size(); i++){
        if (numbers->at(i) < min) {
            min = numbers->at(i);
        }
    }
    return min;
}
