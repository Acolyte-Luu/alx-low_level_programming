#include "main.h"
/**
*print_most_numbers - print numbers except 2 and 4
*int ch - integer ch
*Return: Always 0 (Success)
*/
void print_most_numbers(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
if (ch != '2' && ch != '4')
{
putchar(ch);
}
}
putchar('\n');
}
