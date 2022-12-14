#ifndef MAIN_H
#define MAIN_H
/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
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
