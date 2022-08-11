#include "main.h"

/**
 * print_binary - coverts decimal to binary
 * @str: arguments
 * Return: length of numbers printed
 */
int print_binary(va_list str)
{
	unsigned int num;
	int i;
	int len;
	char *s;
	char *rev_str;

	num = va_arg(str, unsigned int);
	if (num == 0)
		return (_putstring('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (-1);

	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			(*(s + i)) = '0';
		else
			(*(s + i)) = '1';
		num /= 2;
	}
	 (*(s + i)) = '\0';
	rev_str = rev_string(s);
	if (rev_str == NULL)
		return (-1);
	for (i = 0; rev_str[i] != '\0'; i++)
		_putstring(*(rev_str + i));
	free(s);
	free(rev_str);
	return (len);
}
