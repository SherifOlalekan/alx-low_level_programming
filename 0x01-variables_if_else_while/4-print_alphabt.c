#include <stdio.h>
/**
* main - Entry point
* @void: return no value if true
*
* Return: 0 when success
*
* Program to skip e and q in alphabet
*/
	int main(void)

	{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		{
		if (ch == 'e' || ch == 'q')
		continue;
		putchar(ch);
		}
	putchar('\n');

	return (0);
	}
