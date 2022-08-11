#include "main.h"

/**
 * print_hex - Prints decimal to lowercase base16
 * @str: arguments
 * Return: num of char.
 */

int print_hex(va_list str)
{
	unsigned int num;
	int len;
	int i;
	int rem_num;
	char *hex_rep;
	char *rev_hex;

	num = va_arg(str, unsigned int);
	if (num == 0)
		return (_putstring('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 16);
	hex_rep = malloc(sizeof(char) * len + 1);
	if (hex_rep == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		rem_num = num % 16;
		if (rem_num > 9)
		{
			rem_num = hex_check(rem_num, 'x');
			hex_rep[len] = rem_num;
		}
		else
			hex_rep[len] = rem_num + 48;
		num = num / 16;
	}
	hex_rep[len] = '\0';
	rev_hex = rev_string(hex_rep);
	if (rev_hex == NULL)
		return (-1);
	i = 0;
	while (rev_hex[i] != '\0')
	{
		_putstring(rev_hex[i]);
		i++;
	}
	free(hex_rep);
	free(rev_hex);
	return (len);
}
