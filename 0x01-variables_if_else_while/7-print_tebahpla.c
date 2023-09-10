#include <stdio.h>

/**
 *	main - this is a function for practicing
 *	Return: 0 always
 */


int main(void)
{
	char letter;

	for (letter = 'z' ; letter >= 'a' ; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
