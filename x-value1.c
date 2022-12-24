#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	float x, xv;
	printf("Enter value of x:");
	scanf("%f", &x);
	xv = ((((3.0 * x + 2.0) * x - 5.0) * x - 1.0) * x + 7.0) * x - 6.0;

	printf("Answer is: %.1f\n", xv);
	return (0);
}
