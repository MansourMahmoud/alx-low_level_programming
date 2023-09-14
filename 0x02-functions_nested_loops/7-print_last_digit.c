#include "main.h"

/**
 *	print_last_digit - this is a function for pacticing
 *	@n: check input of function
 *	Return: always 0
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -1 * (n % 10);
	}
	else
	{
		lastDigit = n % 10;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);

}
