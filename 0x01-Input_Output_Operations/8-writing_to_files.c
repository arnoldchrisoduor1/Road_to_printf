#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct point
{
    int x, y;
} Point;

int main(int argc, char *argv[])
{
    Point p1 =
    {
        .x = 98,
        .y = 76
    };

    FILE* out;
    
    //open the file in write mode
    out = fopen("file.txt", "w");

    if(out == NULL)
    {
        puts("Error! The file does not exist");
        return 1;
    }

    //write cordinates to the file
    fprintf(out, "%d, %d\n", p1.x, p1.y);

    //close the file
    fclose(out);

    puts("co-ordinates are successfully written");
    puts("Appending new data to the file");

    out = fopen("file.txt", "a");

    if(out == NULL)
    {
        puts("Failed to open file!");
    }

    char new[] = "Hello new file!";

    fprintf(out, "%s", new);

    fclose(out);

    return 0;
}