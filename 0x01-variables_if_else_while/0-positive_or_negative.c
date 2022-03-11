#include <stdlib.h>
#include <time.h>
/**
* Program to print random number great than or equal to 0
*/

/**
* main: Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0) {
		puts("is positive\n");
		}
	else if (n==0) {
		puts("is zero\n");
		}
	else {
		puts("is negative\n");
		}
	return (0);
}
