#include <stdio.h>

/**
 * main - prints alphabets
 * Except q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
