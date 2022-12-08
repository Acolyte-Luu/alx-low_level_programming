#include <stdio.h>
#include <string.h>
/**
*main - Entry point
*filedes - placeholder of characters
*buf - buffer stream to print
*nbyte - number of bytes to print
*write - print string to stdout
*Return: Always 0 (Success)
*/
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
