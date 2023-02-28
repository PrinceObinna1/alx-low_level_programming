#include "main.h"

/**
 * _strlen - to get the length of a string
 * @s: string pointer to pass this function
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;

	}

	return (len);
}
