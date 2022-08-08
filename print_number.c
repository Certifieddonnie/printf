#include "main.h"

/**
 * print_number - Function to print numbers.
 * @str: string
 *
 * Return: length of numbers
 */

int print_number(va_list str)
{
	unsigned int r, s, count;
	int n, len;

	n = va_arg(str, int);
	count = 1;
	len = 0;

	if (n < 0)
	{
		len += _putstring('-');
		r = n * (-1);
	}
	else
		r = n;
	s = r;
	count = 1;

	while (s > 9)
	{
		s /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
		len += _putstring(((r / count) % 10) + '0');

	return (len);
}
