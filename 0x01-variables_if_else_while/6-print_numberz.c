#include <stdio.h>

/**
 *	main - this is a function for practicing
 *	Retrun: 0 always
 *	Description: it`s should print 0-9 useing putchar function
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
