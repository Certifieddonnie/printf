#include "main.h"

/**
 * print_octal - prints number in base 8.
 * @str: arguments.
 * Return: numbers of int printed.
 */
int print_octal(va_list str)
{
	unsigned int num;
	int len;
	int i;
	char *octal_num;
	char *rev_str;

	num = va_arg(str, unsigned int);
	if (num == 0)
		return (_putstring('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 8);

	octal_num = malloc(sizeof(char) * len + 1);
	if (octal_num == NULL)
		return (-1);
	for (len = 0; num > 0; len++)
	{
		octal_num[len] = (num % 8) + 48;
		num = num / 8;
	}
	octal_num[len] = '\0';
	rev_str = rev_string(octal_num);
	if (rev_str == NULL)
		return (-1);
	i = 0;
	while (rev_str[i] != '\0')
	{
		_putstring(rev_str[i]);
		i++;
	}
	free(octal_num);
	free(rev_str);
	return (len);
}
