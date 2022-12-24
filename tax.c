#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	float btax, aftax;

	printf("Enter amount in dollars-and-cents:");
	scanf("%f", &btax);
	aftax = btax + (btax * (5.0f/100.0f));
	printf("Amount plus tax is: %.2f\n", aftax);
}
