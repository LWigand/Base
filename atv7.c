#include<stdio.h>

/*Implemente um programa que lˆe trˆes valores e calcule a m´edia ponderada para pesos 1, 2 e 3, respectivamente
(multiplique cada nota pelo seu peso, some os produtos e divida o resultado pela soma dos pesos).*/

int main() {
	
	float valor1,valor2,valor3,soma;
	
	printf("Entre com o primeiro valor:\n");
	scanf("%f",&valor1);
	
	printf("Entre com o segundo valor:\n");
	scanf("%f",&valor2);
	
	printf("Entre com o terceiro valor:\n");
	scanf("%f",&valor3);
	
	valor1 = valor1 * 1;
	valor2 = valor2 * 2;
	valor3 = valor3 * 3;
	soma = (valor1+valor2+valor3)/6;
	
	printf("Resultado:%f\n",soma);
	
	return 0;
}
