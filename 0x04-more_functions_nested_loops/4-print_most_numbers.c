#include "main.h"
/**
 * print_most_numbers - prints numbers excluding 2 and 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
int i;
i = 0;
while (i < 10)
{
if (i == 2) || (i == 4)
{
continue;
}
_putchar (i + '0');
i++;
}
_putchar ('\n');
}
