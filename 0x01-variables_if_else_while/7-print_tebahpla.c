#include <stdio.h>
/**
* main - Entry point
* @void: return no value if true
*
* Return: always 0
*
* Program to print alphabet in reverse order
*/

	int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		{
		putchar(ch);
		}
		putchar ('\n');

	return (0);
}
