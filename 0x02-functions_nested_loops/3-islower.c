#include "main.h"
/**
 * islower - checks for lowercase character
 * @c: the character to be checked
 * Description:  function that checks for lowercase character.
 * Return; 1 if c is lower, 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
