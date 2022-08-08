#include "main.h"

/**
 * print_percent - Function to write %
 * @str: string which is unused
 *
 * Return: on success 1.
 */

int print_percent(__attribute__((unused))va_list str)
{
	_putstring('%');
	return (1);
}
