#include "main.h"
/**
*print_alphabet_x10 - function that prints alphabet
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
int ch;
int count;
int max = 10;
for (ch = 'a'; ch <= 'z'; ch++)
{
for (count = 0; count < max; count++)
{
_putchar(ch);
}
}
_putchar('\n');
}
