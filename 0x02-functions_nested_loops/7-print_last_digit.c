#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @p: the number
 * Return: value of the last digit
 */
int print_last_digit(int p)
{
	int lastdigit = p % 10;

	if (lastdigit < 0)
		ld += -1;

	_putchar(lastdigit + '0');

	return (0);
}
