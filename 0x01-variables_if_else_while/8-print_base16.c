#include <stdio.h>
/**
*main - Entry point
*int ch - integer ch
*int cd - integer cd
*Return: Always 0 (Success)
*/
int main(void)
{
int ch;
int cd;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
}
for (cd = 'a'; cd <= 'f'; cd++)
{
putchar(cd);
}
putchar('\n');
return (0);
}
