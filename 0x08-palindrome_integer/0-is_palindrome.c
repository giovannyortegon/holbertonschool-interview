#include "palindrome.h"
/**
 * is_palindrome - searching palindrome
 * @n: list toward left
 * Return: 1 Always palindrome
 */
int is_palindrome(unsigned long n)
{
	unsigned long reverse = 0;
	int palindrome;

	palindrome = __palindrome(n, n, reverse);

	return (palindrome);
}
/**
  * __palindrome - recursion searched
  * @n:	remender of operation
  * @tmp:	copy on original number
  * @rev:	reverse number
  * Return: 1 if it is palindrome
  */
int __palindrome(unsigned long n, unsigned long tmp, unsigned long rev)
{
	if (tmp != 0)
	{
		rev = (rev * 10) + (tmp % 10);
		tmp /= 10;
		if (__palindrome(n, tmp, rev))
			return (1);
		else
			return (0);
	}

	if (rev == n)
		return (1);
	else
		return (0);
}
