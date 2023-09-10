#include <stdio.h>

/**
 *	main - this is a function for practicing
 *	Return: 0 always
 */

int main(void)
{

	int singleDigit;

	for (singleDigit = 0; singleDigit <= 9; singleDigit++)
	{
	putchar(singleDigit + '0');
	putchar(',');
	putchar(' ');
	}

	putchar('\n');
	return (0);
}
