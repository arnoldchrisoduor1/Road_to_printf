#include <stdio.h>

const char* PERSON_FORMAT_OUT = "(%s, %d, %c)\n";
const char* PERSON_FORMAT_IN = "(%[^,], %d, %c)\n";


typedef struct Person
{
    char name[20];
    int age;
    char gender;
} Person;

int main(int argc, char* srgv[])
{
    Person p1 = 
    {
        .name = "Andrew",
        .age = 22,
        .gender = 'M'
    };
    Person p2;

    FILE* file;

    file = fopen("text.txt", "w+");
    if(file == NULL)
    {
        puts("Failed to open file");
        return 1;
    }

    fprintf(file, PERSON_FORMAT_OUT, p1.name, p1.age, p1.gender);
    fseek(file, 0, SEEK_SET);
    fscanf(file, PERSON_FORMAT_OUT, 20, p2.name, &p2.age, &p2.gender);
    return 0;
}