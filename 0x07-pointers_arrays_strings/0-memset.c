#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: changed the array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
