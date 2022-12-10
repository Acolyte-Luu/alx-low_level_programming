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
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (cd = 'A'; cd <= 'Z'; cd++)
{
putchar(cd);
}
putchar('\n');
return (0);
}
