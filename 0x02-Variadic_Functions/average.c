#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

float average(int count, ...)
{
    int total = 0;
    float average;
    va_list args;
    va_start(args, count);

    for(int i = 0; i < count; i++)
    {
        int num = va_arg(args, int);
        total += num;
    }

    average = total / count;

    printf("The total of the values are: %d\n", total);
    return average;
}

int main(int argc, char* argv[])
{
    puts("Finding averages...");

    float avg = average(6, 7, 4, 8, 9, 2, 8);
    printf("The average of the given numbers are: %.2f\n", avg);

    return 0;
}