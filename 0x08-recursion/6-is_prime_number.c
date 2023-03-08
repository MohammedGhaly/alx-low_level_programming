#include "main.h"

/**
 * is_prime_number - checks if n is prime number
 * @n: integer
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
	return (0);

	if (n == 2)
		return (1);
	return (checkPrime(n, 2));
}
/**
 * checkPrime - checks if n is prime number
 * @n: integer
 * @i: iteration parameter
 * Return: 1 if prime and 0 if not
 */
int checkPrime(int n, int i)
{
	if (n % i == 0)
		return (0);

	if (i > n / 2)
		return (1);

	return (checkPrime(n, i + 1));
}
