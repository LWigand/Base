#include<stdio.h>

//Faca um programa que converta uma medida de metros para centimetros.

int main() {
	
	int medida, cent;
	printf("Entre com a medida em metros:");
	scanf("%d",&medida);
	
	cent = (medida * 100);
	
	printf("Medida em centimetros:%d", cent);
	
	return 0;
}
