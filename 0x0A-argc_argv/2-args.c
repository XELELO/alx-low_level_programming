#include <stdio.h>

/**
 * main - Entry point
 *@argc: this parameter is the argument noo
 *@argv: this parameter is the argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
