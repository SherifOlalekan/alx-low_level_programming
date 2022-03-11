#include <stdio.h>

/**
* Descripion: Determination of datatype sizes
*
* main - Entry point
*
* Return - 0 if correct
*/
void main ()

{
	printf("Size of a char: %u\n", sizeof(char));
	printf("Size of an int: %u\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(long int));
	printf("Size of a long long int: %lu\n", sizeof(long long int));
	printf("Size of a float: %u\n", sizeof(float));
	return (0);
}
