#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	//unsigned values
	unsigned int a = 77;
	printf("This is an unsigned integer: %u\n", a);
	//Floats
	float f = 45.7;
	printf("This is a float: %.2f\n", f);
	//64 bit characters
	long long int b = 77584749373;
	printf("This is a 64 bit integer: %lld\n",b);
	//Align things
	int g = 7800;
	int h = 8475948;
	printf("%10d\n%10d\n",g, h);
	//printing in hexadecimals
	int v = 12;
	printf("The number 12 in hexadecimals: %x\n", v);
	printf("The number 12 in hexadecimal capital: %X\n", v);
	printf("The number 12 in hex with the ox prefix: %#x\n", v);
	printf("Actual hex values: %08x\n",v);
	printf("Print an address of v : %p\n", &v);

	return 0;
}
