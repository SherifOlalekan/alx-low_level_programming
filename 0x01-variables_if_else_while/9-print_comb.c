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

	for (i = 0; i < 10; i++)
	putchar(i);
		{
		if (i < 9)
		putchar(, );
		}
	putchar('\n');
	
	return(0);
}

