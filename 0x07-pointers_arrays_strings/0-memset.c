#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to be filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ind;
	unsigned char *memory = s, value = c;

	for (ind = 0; ind < n; ind++)
		memory[ind] = value;

	return (memory);
}
