#include <stdio.h>
#include <string.h>
/**
*main - Entry point
*char str1 - string to print
*fwrite - print string to stdout
*Return: Always 0 (Success)
*/
int main(void)
{
FILE *fp;
char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
fp = fopen("file.txt" , "w")
fwrite(str1,1,sizeof(str1));
return (1);
}
