#include <stdio.h>
#include <errno.h>
#include <string.h>

int main(int argc, char* argv[])
{
   
    int res = rename("file.txt", "file2.txt");

    //error checking for renaming
    if(res == 0)
    {
        puts("File renamed successfully!");
    }
    else
    {
        int error = errno;
        printf("Failed to rename file: %s", strerror(error));
    }
   

    return 0;
}