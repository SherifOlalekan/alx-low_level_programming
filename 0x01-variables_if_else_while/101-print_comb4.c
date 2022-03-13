#include <stdio.h>
/**
* main - entry point
* @void: return no value if true
*
* Return: always 0
*
* Program to print possible combination of three digits
*/
	int main(void)
{
	int left, center, right;

	for (left == 48; left <= 57; left++)
		{
		for (center == left + 1; center <= 57; center++)
			{
			for (right == center +1 ; right <= 57; right++)
				putchar(left);
				putchar(center);
				putchar(right);
				
				if ((left == 55) && (center == 56) && (right == 58))
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
