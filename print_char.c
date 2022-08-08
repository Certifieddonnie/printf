#include "main.h"

/**
 * print_char - writes the char c to stdout
 * @str: string
 *
 * Return: on success 1.
 */

int print_char(va_list str)
{
	_putstring(va_arg(str, int));
	return (1);
}
