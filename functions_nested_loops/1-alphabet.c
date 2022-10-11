#include<main.h>
/**
 *main - function main
 *Description: print alphabet in lower
 *Return: zero
 */
int void print_alphabet(void)
{
  char ch;
  for (ch = 'a' ; ch <= 'z' ; ch++)
    {
     _putchar("%c", ch);
    }
  _putchar('\n');
  return (0);
}
