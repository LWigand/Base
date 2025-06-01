#include<stdio.h>

/*
Leia um valor de temperatura em graus Celsius e converta-o em graus Fahrenheit e Kelvin. As f´ormulas de
convers˜ao s˜ao:
F = (9C + 160)/5
K = C + 273
*/

int main() {
	
	float c,f,k;
	
	printf("Entre com a temperatura em Celsius:");
	scanf("%f",&c);
	f = (9*c + 160) /5;
	k = c + 273;
	
	printf("Temperatura em Fahrenheit: %f\n",f);
	printf("Temperatura em Kelvin: %f\n",k);
	
	return 0;
}
