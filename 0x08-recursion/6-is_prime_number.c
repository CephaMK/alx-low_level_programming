/*
 * File - 6-is_prime_number.c
 */

#include "main.h"

/**
 * test_num - checks if number is divisible
 * @num: number in question
 * @i: divisor
 *
 * Return: 0 if divisible
 * 1 if not divisible
 */
int test_num(int num, int i)
{
	if (num % i == 0)
		return (0);

	if (i == num / 2)
		return (1);

	return (test_num(num, i + 1));
}

/**
 * is_prime_number - return 1 if input is a prime number
 * @n: number in question
 *
 * Return: 1 if input is a prime number
 * 0 if otherise
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (test_num(n, i));
}
