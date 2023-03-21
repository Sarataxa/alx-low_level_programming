#include "main.h"
/**
 * print_alphabet - print 10 times all alphabet in lowercase
 * followed by a new line
 */
void print_alphabet_x10(void)
{
int i;
i = 0;
while (i < 10)
{
print_alphabet();
_putchar('\n');
i++;
}
}
