#include <stdio.h>
#include <sys/cdefs.h>

/**
 * main - Entry point
 *@argc: this parameter is the argument noo
 *@argv: this parameter is the argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	__attribute__((unused)) char *mo = argv[0];
	int argno;

	argno = argc - 1;
	printf("%d\n", argno);
	return (0);
}
