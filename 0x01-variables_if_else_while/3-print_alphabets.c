#include <stdio.h>

/*
 * main - prints alphabet in lowercase, and then in uppercase,
 * Return: Always 0 (success)
 */

int main(int ch)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}

