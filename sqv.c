#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0
 */
int main(void)
{
	float r, vol;
	printf("Enter radius:");
	scanf("%f\n", &r);
	vol = (4.0f/3.0f) * (22.0f/7.0f) * (r*r*r);

	printf("Volume is: %.2f", vol);
	return (0);
}
