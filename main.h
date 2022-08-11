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
int print_binary(va_list);
char *rev_string(char *s);
unsigned int base_len(unsigned int num, int base);
char *_memcpy(char *dest, char *src, unsigned int n);
int unsigned_integer(va_list);
int print_unsigned_number(unsigned int n);
int print_octal(va_list);
int print_hex(va_list);
int print_Hex(va_list);
int hex_check(int num, char x);
int print_reversed(va_list);
int rot13(va_list);
int print_address(va_list);
char *convert(unsigned int num, int base);

#endif
