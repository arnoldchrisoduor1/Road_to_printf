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
        .x = 15,
        .y = 56
    };

    Point p2;

    FILE* in;
    FILE* out;
    size_t elements_written;
    size_t elements_read;

    //writing to file
    out = fopen("binary.bn", "wb");

    if(out == NULL)
    {
        puts("Failed to open file");
        return 1;
    }

    elements_written = fwrite(&p1, sizeof(Point), 1, out);
    fclose(out);
    if(elements_written == 0)
    {
        puts("Error! File could not be written");
        return 2;
    }

    //Reading file
    in = fopen("binary.bn", "rb");
    if(in == NULL)
    {
        puts("Error! could not read file");
        return 3;
    }

    elements_read = fread(&p2, sizeof(Point), 1, in);
    fclose(in);
    if(elements_read == 0)
    {
        puts("Error! Elements could not be read");
        return 4;
    }

    printf("Elements moved: %d, %d\n", p2.x, p2.y);

    return 0;
}