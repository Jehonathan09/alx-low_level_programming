#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry Point
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Retur: Always 0 (Success)
 */

void print_alphabelt(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
