#include <main.h>

/**
 *	main - this is a function for practicing
 *	Return: should print 0 always
 */

int main(void)
{
	char str[] = "_putchar";
	int num;

	for (num = 0; num < 8; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
	return (0);
}
