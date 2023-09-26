#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_diagsums - sum of two diagonals
 * @a: square matrix
 * @size: of the diagonal
 */
void print_diagsums(int *a, int size)
{
        int k, b, add1 = 0, add2 = 0;

        for (k = 0; k < size * size; k = k + size + 1)
                add1 = add1 + a[k];
        for (b = size - 1; b < size * size - size; b = b + size - 1)
                add2 = add2 + a[b];
        printf("%d, %d\n", add1, add2);
}
