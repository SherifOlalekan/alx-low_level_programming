#include <stdio.h>
/**
* main - entry point
* @void: return no value if true
*
* Return: always 0
*
* Program to print all single digits with comma.
*/
	int main(void)

{
	int i;

	for (i = 48; i <= 57; i++)
	{
	putchar(i);

		if (i < 57)
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

