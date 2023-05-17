#include <stdio.h>
#include <stdlib.h>

typedef struct Point
{
    int x, y;
} Point;

int main(int argc, char* argv[])
{
    Point p1 = 
    {
        .x = 35,
        .y = 78
    };

    Point p2;

    FILE* in;
    FILE* out;

    out = fopen("poit.bin", "wb");

    if(out == NULL)
    {
        puts("Failed to get file!");
        return 1;
    }
    size_t elements_written = fwrite(&p1, sizeof(Point), 1, out);

    fclose(out);

    if(elements_written == 0)
    {
        puts("No element has been written");
        return 2;
    }
    return 0;
}