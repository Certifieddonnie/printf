#include "main.h"

/**
 * print_reversed - function to reverse and print a string
 * @str: arguments
 * Return: number of chars
 */

int print_reversed(va_list str)
{
	int len;
	char *s;
	char *ptr;

	s = va_arg(str, char *);
	if (s == NULL)
		s = "r%";
	ptr = rev_string(s);
	if (ptr == NULL)
		return (-1);
	for (len = 0; ptr[len] != '\0'; len++)
		_putstring(ptr[len]);
	free(ptr);
	return (len);
}
