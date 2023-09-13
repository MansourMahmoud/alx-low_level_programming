#include "stdio.h"

/**
 *	print_alphabet_x10 - this is a function for practicing
 *	Return: should print 0 always
 */

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line--)
	{
		for (ch = "a"; ch <= "z"; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
