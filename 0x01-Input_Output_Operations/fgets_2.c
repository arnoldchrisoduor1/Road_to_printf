#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char text[50];

	printf("Type something: ");

	fgets(text, sizeof(text), stdin);

	printf("Before any changes: %s", text);

	for(int n = 0; n <= strlen(text); n++)
	{
		printf("%d ", text[n]);
	}
	printf("\n");			

	text[strlen(text) - 1] = '\0';

	printf("After removal: %s",text);

	printf("\n");

	for(int i = 0; i <= strlen(text); i++)
	{
		printf("%d ", text[i]);
	}
	printf("\n");

	return 0;
}
