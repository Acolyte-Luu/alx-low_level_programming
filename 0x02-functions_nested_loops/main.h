#ifndef MAIN_H
#define MAIN_H
/**
* printPut - 'program to print'
* printPut(): function to print string
*/
void printPut(void)
{
int count;
int max = 80;
char msg[] = "_putchar";
for (count = 0; count < max; count++)
{
if (msg[count] == '\0')
{
break;
}
else
putchar(msg[count]);
}
}
/**
* print_alphabet - 'print alphabet in lowercase'
* print_alphabet(): function call to print alphabet in lowercase
*
*/
void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
#endif
