#include "main.h"

/**
 * _puts - this function prints a string, followed by a new line, to stdout
 * @str: the string to print
 * _putchar: for character inputs
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
