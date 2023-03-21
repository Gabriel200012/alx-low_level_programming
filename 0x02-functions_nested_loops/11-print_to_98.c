#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints time table of n
 * print_to_98 - the last digit should be 98
 * @n: takes number input
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
