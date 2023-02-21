#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Entry Point
 * Description: prints the alphabet, in lowercase, followed by a new line.
 * Retur: void
 */

void print_alphabet(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	while(i < 26)
	{
		_putchar(alphabet[i]);
		i++;
	}
	_putchar('\n');
}
