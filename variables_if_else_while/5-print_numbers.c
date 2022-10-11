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
    int n = '0';
    while (n <= 9)
      {
	printf(n);
	n++;
      }
    putchar('\n');
  return (0);
}
