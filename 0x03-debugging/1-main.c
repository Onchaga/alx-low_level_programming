#include<stdio.h>
/**
 *main - causes an ifinite loop
 *
 *Return: 0
 */
int main(void)
{
int i;

printf("infinite loop incoming :(\n");

i = 0;
/*
 *while (i < 10)
 *{
 *infinite loop - no increase or decrease of variable
 *putchar(i);
}
*/
printf("infinite loop avoided!  \\o/\n");
return (0);
}
