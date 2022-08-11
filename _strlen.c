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

/**
 * convert - converts an number to respective base.
 * @num: number to cinvert
 * @base: the base to convert
 * Return: converted number
 */
char *convert(unsigned int num, int base)
{
	const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	while (num != 0)
	{
		*--ptr = Representation[num % base];
		num /= base;
	}

	return (ptr);
}
