#include "main.h"

/**
 * checker - Function to check for format specifiers
 * @format: Pointer to string
 * @symbols: Array of format structure
 * @str: pointer to args.
 * Return: Number of char printed
 */

int checker(const char *format, format_t symbols[], va_list str)
{
	int i = 0, j, outcome, printed_chars = 0;

	while (format && (*(format + i)))
	{
		if (*(format + i) == '%')
		{
			for (j = 0; symbols[j].sign != NULL; j++)
			{
				if (*(format + (i + 1)) == symbols[j].sign[0])
				{
					outcome = symbols[j].fun(str);
					if (outcome == -1)
						return (-1);
					printed_chars += outcome;
					break;
				}
			}
			if (symbols[j].sign == NULL && *(format + (i + 1)) != ' ')
			{
				if (*(format + (i + 1)) != '\0')
				{
					_putstring(*(format + i));
					_putstring(*(format + (i + 1)));
					printed_chars += 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			_putstring(*(format + i));
			printed_chars++;
		}
		i++;
	}
	return (printed_chars);
}
