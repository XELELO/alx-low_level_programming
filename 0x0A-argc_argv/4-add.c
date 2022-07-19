#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program entry point
 * Description: Adds positive numbers
 * @argc: The number of arguments passed to the program
 * @argv: Array of strings arguments that were passed to the program
 * Return: 0 if all the arguments are passed are numbers else 1
 */
int main(const int argc, char const *argv[])
{
	int i;
	int x;
	int y = 0;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x] != '\0'; x++)
		{
			if (!isdigit(argv[i][x]))
			if (!isdigit(argv[i][x]))
			{
				printf("Error\n");
				return (1);
					}
		}
		y += atoi(argv[i]);
	}
	printf("%d\n", y);
	return (0);
}
