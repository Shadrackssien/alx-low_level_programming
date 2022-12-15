#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the number os sign
 * Return: 1 if number is greater than zero
 * Return: 0 if number is zero
 * Return: -1 if number is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
