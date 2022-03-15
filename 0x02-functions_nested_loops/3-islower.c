#include "main.h"
/**
* _islower - entry point of code
* @c: return 1 value if true
*
* Return: 0 if not true.
*
* Program to print lower case
*/

int _islower(int c)

{
if (c > 'a' && c < 'z')
	{
	return (1);
	}
else
	{
	return (0);
	}
}
