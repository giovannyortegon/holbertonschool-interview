#include "palindrome.h"
/**
 * is_palindrome - create a list and searching
 * @n: list toward left
 * Return: 1 Always palindrome
 */
int is_palindrome(unsigned long n)
{
	unsigned long temp, factor, reverse;

	temp = n;

	while (temp != 0)
	{
		factor = temp % 10;
		reverse = reverse * 10 + factor;
		temp /= 10;
	}

	if (reverse == n)
		return (1);
	else
		return (0);
}
