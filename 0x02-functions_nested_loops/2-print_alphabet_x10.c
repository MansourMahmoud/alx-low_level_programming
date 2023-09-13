#include "stdio.h"

/**
 *	print_alphabet_x10 - this is a function for practicing
 *	Return: should print 0 always
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i <= 9; i--)
	{
		for (int c = "a"; c <= "z"; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
