#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    char *text = "I Love to eat Rice and Beans\n";
    unsigned int ui = (unsigned int)INT_MAX + 1024;
    void *addr = (void *)0x7ffe637541f0;

    _printf("Let's try to printf a simple sentence. MINE\n");
    printf("Let's try to printf a simple sentence.\n");

    _printf("Character:[%c] MINE\n", 'P');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s] MINE\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%] MINE\n");
    printf("Percent:[%%]\n");
    _printf("%s%s", text, text);
    _printf("%d\n%i\n",67);
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("%b\n", 98);
    _printf("%R", "Guvf fragrapr vf ergevrirq sebz in_netf!\n");
    _printf("%r", "\nThis sentence is retrieved from va_args!");
    _printf("Address:[%p]\n", addr);
    _printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Unknown:[%r]\n");
    return (0);
}
