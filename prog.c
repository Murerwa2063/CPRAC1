#include <stdio.h>
/**
 * main - Enrty point main function
 *
 * Return: 0
 */

int main(void)
{
	int n[10];
	int i, j;

	for (i = 0; i <= 100; i++)
	{
		n[i] = i + 10;
	}

	for (j = 0; j <= 100; j++)
	{
		printf("Element of array[%d] = %d\n", j, n[j]);
	}
	return (0);
}
