#include "main.h"

/**
 * print_alphabet_x10 - func
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
int a = 0;
while (a < 10)
{
char b = 'b';
while (b <= 'z')
{
_putchar(b);
b++;
}
_putchar('\n');
a++;
}
}
