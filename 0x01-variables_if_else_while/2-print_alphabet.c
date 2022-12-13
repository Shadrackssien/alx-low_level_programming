#include <stdio.h>

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
