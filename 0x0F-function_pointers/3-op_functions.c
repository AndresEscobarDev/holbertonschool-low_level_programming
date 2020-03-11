#include "3-calc.h"
/**
 * op_add - Add two numbers.
 * @a: First Number.
 * @b: Second Number.
 * Return: Result.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Substract two numbers.
 * @a: First Number.
 * @b: Second Number.
 * Return: Result.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiply two numbers.
 * @a: First Number.
 * @b: Second Number.
 * Return: Result.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Div two numbers.
 * @a: First Number.
 * @b: Second Number.
 * Return: Result.
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - Module two numbers.
 * @a: First Number.
 * @b: Second Number.
 * Return: Result.
 */
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error\n");
	exit(100);
}
