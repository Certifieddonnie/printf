#include "main.h"

/**
 * _strlen - length of string
 * @s: string
 *
 * Return: string length.
 */

int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + (_strlen(s + 1)));
	else
		return (0);
}
