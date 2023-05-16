#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;
	
	while(argc > i)
	{
		sum = sum + atoi(argv[i]);
		i++;
	}

	printf("The sum of the numbers is: %d",sum);

	return 0;
}
