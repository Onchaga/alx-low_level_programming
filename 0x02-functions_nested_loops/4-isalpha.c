#include "main.h"
/**
 *_isalpha - return 1 if c is a letter in upper or lowercase
 *@c: The int to print
 *Return: always return 0
 */
int _isalpha(int c)
{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
{
return (1);
}
else
{
return (0);
}
}

