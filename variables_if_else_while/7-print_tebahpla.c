#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - function main
 *Description: print alphabet reverse
 *Return: zero
 */
int main(void)
{
  char ch = 'z';
  while (ch <= 'a')
    {
      putchar(ch);
      ch--;
    }
  putchar('\n');
  return (0);
}
