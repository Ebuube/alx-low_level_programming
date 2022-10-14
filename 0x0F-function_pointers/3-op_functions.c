#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: first operand
 * @b: second operand
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: first operand
 * @b: second operand
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first operand
 * @b: second operand
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the result of the division of a by b
 * @a: first operand
 * @b: second operand
 *
 * Description: exits with exit staus 100 if b is 0 i.e integer division
 * Return: the result of a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a and b
 * @a: first operand
 * @b: second operand
 *
 * Description: exits with exit status 100 if b is 0 i.e integer division
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
