#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 *main - function main
 *Description: print alphabet
 *Return: zero
 */
int main(void)
{
  char letter = 'a';
  while (letter <= 122)
    {
      putchar(letter);
      letter++;
    }
  putchar('\n');
  return (0);
}
