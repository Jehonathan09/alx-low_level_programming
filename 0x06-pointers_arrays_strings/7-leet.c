#include "main.h"

/**
 * leet - function encodes a string into 1337
 * @s: an input string to encode
 * Return: an encode string
 */
char leet(char *s)
{

	int i, j;
	char a[] = "aAeEoOtTlL";
	chars b[] = "4433007711";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == *(s + i))
				*(s + i) = b[j];
		}
	}
	return (s);
}

