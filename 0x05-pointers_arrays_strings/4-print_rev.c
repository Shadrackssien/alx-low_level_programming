#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: String
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	fro (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	-putchar('\n');
}
