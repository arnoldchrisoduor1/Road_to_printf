#include <stdio.h>
#include <stdarg.h>

int sum_numbers(int count, ...)
{
    int total = 0;
    va_list args;
    va_start(args, count);

    for(int i = 0; i < count; i++)
    {
        int num = va_arg(args, int);
        total += num;
    }

    va_end(args);
    return total;
}
int main(int argc, char* argv[])
{
    int result1 = sum_numbers(4, 4, 5, 3, 2);
    int result2 = sum_numbers(3, 48, 5, 7);

    printf("Sum of first digits is: %d\n", result1);
    printf("Sum of second digits is: %d\n", result2);


    return 0;
}