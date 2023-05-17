#include <stdio.h>
#include <stdlib.h>

#define POINT_FORMAT "(%d, %d)"

typedef struct Point
{
    int x, y;
} Point;

void process(Point q)
{
    q.x += 5;
    printf(POINT_FORMAT, q.x, q.y);
}
int main(int argc, char* argv[])
{
    Point p = 
    {
        .x = 34,
        .y = 87
    };

    process(p);
    char buf[100];
    snprintf(buf, 100, POINT_FORMAT, p.x, p.y);

    printf("%s", buf);

    return 0;
}