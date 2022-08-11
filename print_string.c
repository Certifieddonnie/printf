#include "main.h"

/**
 * print_string - writes the string of respective length
 * @str: string
 *
 * Return: on success 1.
 */

int print_string(va_list str)
{
	char *c;
	int len;

	c = va_arg(str, char *);
	if (c == NULL)
		c = "(null)";
	len = _strlen(c);

	if (len)
		return (write(1, c, len));

	return (-1);
}
