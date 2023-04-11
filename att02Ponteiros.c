#include <stdio.h>

int main ()
{
	int n1=10,n2=5;
	int *pt_n1, *pt_n2;
	
	printf("\nPonteiro n1: %i , Ponteiro n2 e: %i",&n1,&n2);
	if (&n1>&n2)
		printf("\nO endereco maior e do ponteiro n1: %i",&n1);
	else printf("\nO endereco maior e do ponteiro n2: %i",&n2);
		
}
