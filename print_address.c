#include "main.h"

/**
 * print_address - Function that prints a parsed address
 * @str: arguments
 * Return: length of char printed
 */
int print_address(va_list str)
{
	unsigned long int num;
	char *s;
	int len;
	int i;

	num = va_arg(str, unsigned long int);
	len = 0;

	s = convert(num, 16);
	*--s = 'e';
	*--s = 'f';
	*--s = 'f';
	*--s = 'f';
	*--s = 'x';
	*--s = '0';

	if (!num)
		len += _putstring('0');
	for (i = 0; s[i] && num; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'F')
			len += _putstring(s[i] + ' ');
		else
			len += _putstring(s[i]);
	}

	return (len);
}
