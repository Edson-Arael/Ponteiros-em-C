#include <stdio.h>

void dobro(int *x, int *y);

int main(){
	int x,y;
	printf("\nInforme o primeiro valor:");
	scanf("%i",&x);
	printf("\nInforme o segundo valor:");
	scanf("%i",&y);
	dobro(&x,&y);
	
	
	
}
void dobro(int *x, int *y){
	*x=*x+*y;
	printf("\nValor de X e: %i",*x);
	printf("\nValor de Y e: %i",*y);
	
}
