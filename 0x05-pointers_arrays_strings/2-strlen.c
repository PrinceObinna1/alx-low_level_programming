#include "main.h"

/**
 * _strlen - to get the length of a string
 * @s: string pointer to pass this function
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')

	{

		longi++;

	s++;
	}
	return (longi);
}
