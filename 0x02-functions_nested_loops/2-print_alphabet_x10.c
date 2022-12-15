#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int tentimes;
	char la;

	for (tentimes = 0; tentimes <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
		{
			_putchar(la);
		}
		_putchar('\n');
	}
