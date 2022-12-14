#include "main.h"
/**
*print_alphabet_x10 - function that prints alphabet
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int ch;
int count = 0;
while (count++ <= 9)
{
for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
}
