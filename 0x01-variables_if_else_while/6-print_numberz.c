#include <stdio.h>

/**
 *	main - this is a function for practicing
 *	Return: 0 always
 */

int main(void)
{
	int singleDigit = 0;

	while (singleDigit < 10)
	{
		putchar(singleDigit + '0');
		singleDigit++;
	}
	putchar('\n');

	return (0);
}
