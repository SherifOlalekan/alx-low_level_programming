#include "main.h"
/**
* print_alphabet_x10 - entry point of code
* @void: return no value if true
*
* Return: 0 if true.
*
* Program to print alphabet 10x
*/
	void print_alphabet_x10(void)

{
	int alphabet = 0;
	while (alphabet < 10)
	{
		char ch = 'a';

		while (ch <= 'z')

		{
		 _putchar(ch);
		ch++;
		}

	alphabet++;

	_putchar('\n');
	}
}
