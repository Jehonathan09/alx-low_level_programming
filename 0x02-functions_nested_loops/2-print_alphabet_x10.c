#include "main.h"

/**
 * print-alphabet_x10 - print alpha x10
 * Description:prints 10 times the alphabet, in lowercase, followed by a new line.
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while(i < 10)
	{
		c = 'a';
		while(c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
