#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* @void: returns no value
*
* Return: Always 0 (Success)
*
* Description: This program display random number when it is run
*/
int main(void)
{
	int n;

        srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		{
		printf("Last digit of is %d and is greater than 5\n", n);
		}
	else if (n == 0)
		{
		printf("Last digit of is %d and is 0\n", n);
		}
	else if (n < 6 != 0)
		{
		printf("Last digit of is %d and is less than 6 and not 0\n", n);
		}
	return (0);
}
