#include "main.h"

#include <stdio.h>

/**
 *
 *  * print_diagsums - prints the sum of the two diagonals
 *
 *   * of a square matrix of integers
 *
 *    * @a: square matrix of which we print the sum of diagonals
 *
 *     * @size: size of the matrix
 *
 *      */

void print_diagsums(int *a, int size)

{

		int x, sum1 = 0, sum2 = 0;



			for (x = 0; x < size; x++)

					{

								sum1 += a[(size * x) + x];

										sum2 += a[(size * (x + 1)) - (x + 1)];

											}

				printf("%d, %d\n", sum1, sum2);

}
