#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int a = 14;

	printf("Decimal: %d\n", a);
	printf("Hexadecimal: %#08x\n", a);
	printf("Octal: %011o\n", a);

	long long int i, j;
	for(i = 0; i < sizeof(int); i++)
	{
		char byte = ((char*)&a)[i];
		for(j = 8; j >=0; j--)
		{
			char bit = (byte >> j) & 1;
			printf("%hhd",bit);
		}
		printf(" ");

	}

return 0;
}
