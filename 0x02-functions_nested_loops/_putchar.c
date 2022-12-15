#include "main.h"
#include <unistd.h>

/**
 * putchar - write character
 * Print chracter
 *
 *Return: On success 1
 */
int _putchar(char p)
{
        return (write(1, &p, 1));
}
