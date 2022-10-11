#include "main.h"
/**
 *main - function main
 *Description: print alphabet with _putchar
 *Return: zero
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
