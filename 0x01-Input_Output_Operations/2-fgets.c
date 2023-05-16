#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char buffer[100];

	printf("Type something: ");

	fgets(buffer, sizeof(buffer), stdin);

//To remove the new line character we use the command (strcspn)
	
	buffer[strlen(buffer) - 1] = '\0';

	//This command will confirm if the newline is still there
	
	for(int i=0; i <= strlen(buffer); i++)
	{
		printf("%d ", buffer[i]);
	}

	printf("\n");

	printf("You entered: %s", buffer);

	return 0;
}
