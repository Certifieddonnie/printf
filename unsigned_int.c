#include "main.h"

/**
 * unsigned_integer - prints unsigned int
 * @str: arguments
 * Return: numbers.
 */

int unsigned_integer(va_list str)
{
	unsigned int num;

	num = va_arg(str, unsigned int);
	if (num == 0)
		return (print_unsigned_number(num));
	if (num < 1)
		return (-1);
	return (print_unsigned_number(num));
}
