#include <stdio.h>

/**
 *	main - this is a function for practicing
 *	Return: 0 always
 */

int main(void)
{
	char letter;
	int singleDigit;

	for (singleDigit = 0 ; singleDigit <= 9 ; singleDigit++)
	{
		putchar(singleDigit + '0');
	}
	for (letter = 'a' ; letter <= 'f' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
