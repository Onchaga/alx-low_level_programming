#include "main.h"
/**
 *_strlen - length of a string
 *@s: a pointer an int that will be updated
 *Return: 0 always
 */
int _strlen(char *s)
{
int u;
u = 0;

while (s[u] != '\0')
{
u++;
}
return (u);
}
