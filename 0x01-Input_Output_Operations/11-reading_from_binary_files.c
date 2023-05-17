#include <stdio.h>

typedef struct Point
{
    int x, y;
} Point;

int main(int argc, char* argv[])
{
    Point p2;

    FILE* in;

    in = fopen("binary.bin", "rb");

    if(in == NULL)
    {
        puts("Could not read file");
        return 1;
    }

    size_t elements_read = fread(&p2, sizeof(Point), 1, in);
    fclose(in);
    if(elements_read == 0)
    {
        puts("No elements could be read");
        return 2;
    }

    printf("Point read from binary file: %d, %d\n", p2.x, p2.y);

    return 0;
}