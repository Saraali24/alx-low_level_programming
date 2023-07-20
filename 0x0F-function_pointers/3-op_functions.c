#include "3_calc.h"
#include <stdlib.h>
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/*
 * op_add - function that sum to variables
 *
 * @a: parameter is integer
 *
 * @b: parameter is interger
 *
 * return: returns the sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/*
 * op_sub - function that sum to variables
 *
 * @a: parameter is integer
 *
 * @b: parameter is interger
 *
 * return: returns the subtraction of a and b
 */
int op_sub(int a, int b)
{
return (a - b);
}

/*
 * op_mul - function that sum to variables
 *
 * @a: parameter is integer
 *
 * @b: parameter is interger
 *
 * return: returns the multiple of a and b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/*
 * op_div - function that sum to variables
 *
 * @a: parameter is integer
 *
 * @b: parameter is interger
 *
 * return: returns the division of a and b
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
return (100);
}
return (a / b);

}

/*
 * op_mod - function that give the remainder of the division for two variables
 *
 * @a: parameter is integer
 *
 * @b: parameter is interger
 *
 * return: returns the remainder of the division of a and b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
return (100);
}
return (a % b);
}
