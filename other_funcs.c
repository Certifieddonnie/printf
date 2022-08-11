#include "main.h"

/**
 * rev_string - function to reverse string
 *
 * @s: string to reverse
 * Return: Pointer to char
 */
char *rev_string(char *s)
{
	int i, y;
	char *dest;
	char hold;

	i = _strlen(s);
	dest = malloc(sizeof(char) * i + 1);
	if (dest == NULL)
		return (NULL);
	_memcpy(dest, s, i);
	for (y = 0; y < i; y++, i--)
	{
		hold = dest[i - 1];
		dest[i - 1] = dest[y];
		dest[y] = hold;
	}
	return (dest);
}

/**
 * base_len - calculates the length of base number
 * @num: the number to converts
 * @base: base to be caculated
 * Return: length of number.
 */
unsigned int base_len(unsigned int num, int base)
{
	unsigned int y;

	y = 0;
	while (num > 0)
	{
		num /= base;
		y++;
	}
	return (y);
}

/**
 * _memcpy - copy memory area
 * @dest: destination of copied string
 * @src: source of string.
 * @n: number of bytes to copy.
 * Return: destination of string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		dest[y] = src[y];
	dest[y] = '\0';
	return (dest);
}

/**
 * print_unsigned_number - Prints unsigned number
 * @n: unsigned num to print
 * Return: number of int printed
 */
int print_unsigned_number(unsigned int n)
{
	int div, len;
	unsigned int num;

	div = 1, len = 0;
	num = n;
	for (; num / div > 9; )
		div *= 10;
	for (; div != 0;)
	{
		len += _putstring('0' + num / div);
		num %= div;
		div /= 10;
	}
	return (len);
}

/**
 * hex_check - checks which hex func is calling it
 * @num: num to convert into letter
 * @x: which hex func is calling.
 * Return: assci value for a letter
 */
int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'X')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
