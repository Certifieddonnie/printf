#include "main.h"

/**
 * rot13 - converts string to rot13
 * @str: string to convert
 * Return: converted string
 */

int rot13(va_list str)
{
	int i;
	int x;
	char *s;
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char u[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	s = va_arg(str, char *);
	if (s == NULL)
		return (-1);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x <= 52; x++)
		{
			if (s[i] == b[x])
			{
				_putstring(u[x]);
				break;
			}
		}
		if (x == 53)
			_putstring(s[i]);
	}
	return (i);
}
