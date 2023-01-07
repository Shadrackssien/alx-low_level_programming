#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The number
 *
 * Return: If n > 0 - The factorial of n
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= 0 && n <= 1)
		return (1);
}
