#include <stdio.h>
/**
*main - Entry point
*int ch - integer ch
*Return: Always 0 (Success)
*/
int main(void)
{
int ch = 'a';
do {
putchar(ch);
} while (ch != 'e' && ch != 'q');
putchar('\n');
return (0);
}
