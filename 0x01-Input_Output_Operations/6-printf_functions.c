#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{

	char buffer[100];

	sprintf(buffer, "%d", 5);
	snprintf(buffer, 100, "%d", 5);
	fprintf(stderr, 100, "%d", 7);
	fprintf_s(stderr, 100, "%d", 7);

	va_list args;
	vfprintf(buffer, 100, "%s", args);
	vfwprintf(buffer, 100, "%s", args);
	printf("%s",buffer);


	//s - buffer
	//sn - limited memory
	//f - writing to files / error outputs
	//_s - safer verson (c11) standard
	//w - wide char
	//v - uses va_list

return 0;
}
