#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
*n=98;
}
int main(void)
{
int n;

n = 402;
_putchar("n=%d\n", n);
reset_to_98(&n);
_putchar("n=%d\n", n);
return (0);
}
