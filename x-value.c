#include <stdio.h>
/**
 * main - Entry point
 * computes value of a polynomial expression using given value of x
 *
 * Return: 0 (success) 1 otherwise
 */
int main(void)
{
	float x, xv;

	printf("Enter value for x:");
	scanf("%f", &x);
	xv = (3*(x*x*x*x*x)) + (2*(x*x*x*x)) - (5*(x*x*x)) - (x*x) + (7*x) - 6;
	printf("Answer is: %.1f\n", xv);
}
