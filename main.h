#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct format - structure of a sgin and its function
 * @sign: format specifiers
 * @fun: function pointer.
 *
 */
typedef struct format
{
	char *sign;
	int (*fun)(va_list);
} format_t;

int _printf(const char *format, ...);
int print_char(va_list);
int print_percent(va_list);
int print_string(va_list);
int _putstring(char);
int _strlen(char *s);
int print_number(va_list);
int checker(const char *format, format_t symbols[], va_list str);

#endif
