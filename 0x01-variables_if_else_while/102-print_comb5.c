#include <stdio.h>
/**
*main - Entry point
*int dig1 - first digit
*dig2 - second digit
*k - checker integer
*Return: Always 0 (Success)
*/
int main(void)
{
int dig1, dig2, k = 0;
for (dig1 = '0'; dig1 <= "99"; dig1++)
{
for (dig2 = dig1 + 1; dig2 <= "99"; dig2++, k++)
{
if (k > 0)
{
putchar(',');
putchar(' ');
}
putchar(dig1);
putchar(dig2);
}
}
putchar('\n');
return (0);
}
