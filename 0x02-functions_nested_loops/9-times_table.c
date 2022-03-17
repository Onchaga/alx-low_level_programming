#include "main.h"
/**
 *times_table - prints the 9 times table
 *
 *Return: always return 0
 */
void times_table(void)
{
int m;
int n;
int p;
for (m = 0; m <= 9; m++)
{
for (n = 0; n <= 9; n++)
{
p = m * n;
if ((p / 10) == 0)
{
if (n == 0)
{
_putchar('0');
}
if (n != 0)
{
_putchar (' ');
_putchar ((p % 10) + '0');
}
if (n < 9)
{
_putchar (',');
_putchar (' ');
}
}
else
{
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
if (n < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar ('\n');
}
}
