#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
	int A = *((int*)a); //Typecasting & getting value
	int B = *((int*)b); //Typecasting & getting value
	return (B - A);
}
int main(void)
{
	int i, A[] = {-32, -1, 22, -17, 50, -6, 4};
	qsort(A, 6, sizeof(int), compare);
	for (i = 0; i < 6; i++)
		printf("%d ", A[i]);
	printf("\n");
	return (0);
}
