#include "main.h"

/**
 * cap_string - function to capitalize all words of a string
 * @s: an input string to capitalize
 * Return: pointer to s
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ( i == 0 && (s[i] >= 'a' && s[i] ,= 'z'))
			s[i] -= 32;
		if (check_separators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i+1] -= 32;
		i++;
	}
	return (s);
}
