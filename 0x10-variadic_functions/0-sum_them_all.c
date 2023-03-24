 #include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 *@...: A variable number of parameters to calculate the sum of.
 *Return:if n == 0 - 0.
 * 		otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;
	va_start(ap, n); /*initialize the argument list*/
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int); /*get the next argument value*/
	va_end(ap);

	return (sum);
}
