#include <ctype.h>
#include <stdio.h>

/**
 *	main - this is a function for practicing
 *	Return: 0 always
 *	Description: this function should be print lower and upper alphabet
 */


int main(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(tolower(letter));
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(toupper(letter));
	}
	putchar('\n');
	return (0);
}
