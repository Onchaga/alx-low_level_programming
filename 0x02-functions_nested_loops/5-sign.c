#include "main.h"
/**
 *print_sign - return 0 or 1 depending on the sign
 *Return:always return 0
 *@n: the int to be printed
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
