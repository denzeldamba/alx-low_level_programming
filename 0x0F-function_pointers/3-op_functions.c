#include "3-calc.h"

/**
 * op_add - Return sum of a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op sub - Returns differences a and b
 * @a: First number
 * @b: Second number
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Return product of a and b
 * @a: First Number
 * @b: Second number
 *
 * Return: Product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns result of division of a by b
 * @a: First number
 * @b: Second number
 *
 * Return: Result of division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns remainder of division of a by b
 * @a: First number
 * @b: Second number
 *
 * Return: Remainder of division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
