#include <stdio.h>

/**
 *	main - this is a function for practicing
 *	Return: 0 always
 */


int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
