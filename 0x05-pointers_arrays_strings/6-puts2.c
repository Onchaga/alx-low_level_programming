#include "main.h"
/**
 *puts2 - prints every character in a string
 *@s:a pointer to an int that will be changed
 *
 *Return:void which means correct
 */
void puts2(char *str)
{
int a;

for (a = 0; str[a] != '\0'; a++)
{
if (a % 2 == 0)
_putchar (str[a]);
}
_putchar ('\n');
}
