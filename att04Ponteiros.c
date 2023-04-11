#include <stdio.h>

int inverte(int *x, int *y);

int main ()
{
	int x=10, y=5;

	inverte(&x, &y);
	printf("\nValor de X e: %i",x);
	printf("\nValor de Y e: %i",y);
}
int inverte(int *x, int *y)
{
	int z;
	z=*y;
	*y=*x;
	*x=z;
}
