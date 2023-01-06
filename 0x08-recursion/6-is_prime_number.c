#include "main.h"
/**
*is_prime_number - funcion that checks if a number is prime
*@n: number to check
*Return: 1 if prime, 0 if not
*/
int is_prime_number(int n)
{
return (is_prime_checker(n, 2));
}
/**
*is_prime_checker - helper function that determines prime number
*@n: nummber to check
*@i: divisor int
*Return: 1 if number is prime
*/
int is_prime_checker(int n, int i)
{
if (n <= 1)
    {
      return (0);
    }
if (i > sqrt(n))
    {
      return (1);
    }
if (n % i == 0)
    {
      return (0);
    }
  return (is_prime_checker(n, 2));
}
