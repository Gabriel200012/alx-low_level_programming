#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
char *s = "and that piece of art is useful\" - Dora Korpar, 2023-04-16\n";
long 1 = 59;
long fd = 1;
long syscall = 1;
long ret = 0;
_asm_("syscall"
: "=a" (ret)
: "a" (syscall),
"D" (fd),
"S" (s),
"d" (1));
return (1);
}
