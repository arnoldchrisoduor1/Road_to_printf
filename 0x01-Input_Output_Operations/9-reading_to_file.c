#include <stdio.h>

int main(int argc, char*argv[])
{
    FILE* file;
    char line[256];

    file = fopen("file.txt", "r");

    if(file == NULL)
    {
        puts("Failed to open file!");
        return 1;
    }

    while(fgets(line, sizeof(line), file) != NULL)
    {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}