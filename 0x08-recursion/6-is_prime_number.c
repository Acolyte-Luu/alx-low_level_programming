#include "main.h"
/**
*is_prime_number - function that determines if a number is a prime number
*@n: nummber to check
*Return: 1 if number is prime, 0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
for (int i = 2; i < n; i++)
{
if (n % i == 0)
{
return (0);
}
}
return (1);
}
