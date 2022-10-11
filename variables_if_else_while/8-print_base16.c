#include<stdio.h>
/**
 *main - this is function main
 *Description: reverse alphabet
 *Return: zero
 */
int main(void)
{
  char ch = 'z';
  int n = '0';
    while (n <= '9')
      {
       putchar(n);
       n++;
      }
  while (ch <= 'e')
    {
      putchar(ch);
      ch++;
    }
  putchar('\n');
  return (0);
}
