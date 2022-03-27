#include "main.h"
/**
 *swap_int - swaps the values of two integers
 *@a: a pointer to an int that will be updated
 *@b: a pointer to an int that will be updated
 *Return: 0 always
 */
void swap_int(int *a, int *b)
{
int f;

f = *a;
*a = *b;
*b = f;
}

