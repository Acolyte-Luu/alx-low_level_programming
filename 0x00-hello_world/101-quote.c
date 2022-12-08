#include <stdio.h>
#include <string.h>
/**
*main - Entry point
*char str1 - string to print
*write - print string to stdout
*Return: Always 0 (Success)
*/
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
int q;
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
return (1);
}
