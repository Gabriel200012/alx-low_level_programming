#include <stdio.h>

/**
 * main - prints lowercase alphabets reverse
 * followed ny a new line 
 * Return: Always 0 (success)
 */

int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return(0);
}
