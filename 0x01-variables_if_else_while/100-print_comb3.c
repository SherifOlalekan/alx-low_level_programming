#include <stdio.h>
/**
* main - enrty point
* @void: return no value if true
*
* Return: always 0
*
* Program to print all combination of 2 digits
*/
	int main(void)

{
	int left, right;

	for (left = 48; left <= 57; left++)
	{
		for (right = left + 1; right <= 57; right++)
			{
			putchar(left);
			putchar(right);

				if ((left == 56) && (right == 57))
				{
				break;
				}
		putchar(',');
		putchar(' ');
			}
	}
	putchar('\n');

	return (0);
}
