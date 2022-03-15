#include "main.h"
/**
* main - entry point of code
* @void: return no value if true
*
* Return: 0 if true.
*
* Program to print _putchar
*/
	int main(void)

{
	int i;
	char string[9] = "_putchar";

	for (i = 0; i < 9; i++)
	{
		_putchar(string[i]);
	}

	_putchar('\n');

	return (0);
}
