#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the alphabet
 *
 * Description: Program to print alphabet in lower case
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
		putchar('\n');

	return (0);
}
