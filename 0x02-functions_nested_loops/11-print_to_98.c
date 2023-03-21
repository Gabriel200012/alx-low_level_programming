#include "main.h"
#include <stdio.h>
/**
 * main: to write a function that prints all natural numbers from n to 98, followed by a new line.
 * Return:0 or 1
 */

void print_to_98(int n)
{
while (n < 98)
{
printf("%i, ", n);
n++;
}
while (n > 98)
{
printf("%i, ", n);
n--;
}
printf("98");
putchar('\n');
}
