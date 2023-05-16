#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct point
{
    int x, y;
} Point;

int main(int argc, char* argv[])
{
    Point p1;

    FILE* in;

    fopen("file.txt", "r");

    if(in == NULL)
    {
        puts("Failed to open file");
        return 1;
    }

    //reading the coordinates
    fscanf(in, "%d, %d", &p1.x, &p1.y);

    //close the file
    fclose(in);

    //print the coordinates
    printf("Coordinates: %d, %d\n", p1.x, p1.y);

    return 0;
}