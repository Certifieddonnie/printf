#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    char *text = "I Love to eat Rice and Beans\n";

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
    return (0);
}
