#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE* out;

    out = fopen("file.txt", "w");

    if(out == NULL)
    {
        puts("File out error!");
        return 1;
    }

    fprintf(out, "20");
    fseek(out, 0, SEEK_SET);
    //fseek(out, 1, SEEK_CUR); - moves the cursor a byte forward from the current location.

    //fseek(out, -2, SEEK_END) - sets the cursor two characters before the end of the file.
    fprintf(out, "24");

    return 0;
}