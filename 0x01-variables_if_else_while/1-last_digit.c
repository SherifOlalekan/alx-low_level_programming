#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
* @void: returns no value if true
*
* Return: Always 0 (Success)
*
* This program display random number when it is run
*/
int main(void)
{
	int n, ld;

	printf("Enter a value: ");
	scanf("%d", &n);

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld =n % 10;
	if (n > 5)
		{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
		}
	else if (n == 0)
		{
		printf("Last digit of %d is %d and is 0\n", n, ld);
		}
	else if ((n < 6) != 0)
		{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
		}
	return (0);
}
