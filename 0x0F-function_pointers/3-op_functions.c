/*
 * File - 3-op_functions.c
 */

#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - returns sum of to numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: 1st no.
 * @b: 2nd no.
 *
 * Return: subtaraction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: 1st num
 * @b: 2nd num
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: 1st no.
 * @b: 2nd num
 *
 * Return: qountient of the two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of two numbers
 * @a: 1st no.
 * @b: 2nd no.
 *
 * Return: remainder from division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
