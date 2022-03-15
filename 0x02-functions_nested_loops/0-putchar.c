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
	char *s = "_putchar";
	while (*s != '\0')

	{
		_putchar(*s);
	}
	_putchar('\n');

	return (0);
}
