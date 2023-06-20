#include <stdio.h>

int main()
{
	int a[5] = {5, 5, 2, 6, 12};

	int *p, *q;
	// int *q;
	p = &a[0];
	q = a[1];
	if (p == q)
		printf("\nSame");
	else
		printf("\nDifferent");

	return 0;
}
