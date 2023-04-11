#include<stdio.h>
void imprimir(float num[], int size);
int main()
{
	float num[10];
	int x=0;
	
	for(x=0;x<10;x++)
	{
		printf("\nInforme um numero:");
		scanf("%f",&num[x]);
	}
	imprimir(num,10);
	

}
void imprimir(float num[], int size)
{	
	int x=0;
	for(x=0;x<10;x++)
	{
		printf("\nO numero e:%.2f",num[x]);
		
	}
	
}

