#include "main.h"
/**
 * print_numbers - function that prints numbers 0 to 9
 *
 * Returns: nothing
 */

void print_numbers(void)
{
int n = 0;
while (n < 10)
{
_putchar(n + '0');
n += 1;
}
_putchar('\n');
}
