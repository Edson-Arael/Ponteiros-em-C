#include <stdio.h>

int recebe(int *x, int *y);

int main(){
	int x,y;
	printf("\nInforme o primeiro valor:");
	scanf("%i",&x);
	printf("\nInforme o segundo valor:");
	scanf("%i",&y);
	recebe(&x,&y);
	printf("\nValor de X e: %i",x);
	printf("\nValor de Y e: %i",y);
	
}
int recebe(int *x, int *y)
{
	int z;
	if(*x<*y)
	{
		z=*y;
		*x=*y;
		*y=z;
	}
}
