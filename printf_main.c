#include "main.h"
/**
 * _printf - Function that prints string using format specifiers
 * @format: pointer to string
 * Return: On success printed char
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	format_t symbols[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_number},
		{"i", print_number},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_Hex},
		{"r", print_reversed},
		{"R", rot13},
		{"b", print_binary},
		{"p", print_address},
		{NULL, NULL}
	};
	va_list str;

	if (format == NULL)
		return (-1);
	va_start(str, format);

	printed_chars = checker(format, symbols, str);
	va_end(str);
	return (printed_chars);
}
