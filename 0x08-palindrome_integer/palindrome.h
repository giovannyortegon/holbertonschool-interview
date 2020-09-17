#ifndef PALINDROME_H
#define PALINDROME_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int is_palindrome(unsigned long n);
int __palindrome(unsigned long n, unsigned long tmp, unsigned long rev);

#endif /* PALINDROME_H */
