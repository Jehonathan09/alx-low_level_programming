#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- Entry point
 *
 * Description: using main function
 * prints numbers of base 16 in lowercase
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char c = 'a';
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
