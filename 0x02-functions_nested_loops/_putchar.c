#include <stdio.h>
#include <unistd.h>
#include <main.h>

/**
 *	_putchar - writes the character alphabet to stdout
 *	@alphabet: The character to print
 *	Return: on success 1.
 */

int _putchar(char alphabet)
{
	return (write(1, &alphabet, 1));
}
