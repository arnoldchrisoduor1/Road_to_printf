#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
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
    int sum1 = sum(4, 3, 5, 7, 9);
    int sum2 = sum(3, 5, 8, 45);

    printf("Sum: %d\n", sum1);
    printf("Sum 2: %d\n", sum2);
    
    return 0;
}