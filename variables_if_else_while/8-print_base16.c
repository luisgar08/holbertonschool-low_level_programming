#include<stdio.h>
/**
 *main - this is function main
 *Description: reverse alphabet
 *Return: zero
 */
int main(void)
{
char ch = 'a';
int n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
