#include<stdio.h>

/* Leia o sal´ario mensal atual de um funcion´ario e o percentual de reajuste. Calcular e escrever o valor do novo
sal´ario.*/

int main() {
	
	float salario,percentual,novo;
	
	printf("Entre com o salario inicial:\n");
	scanf("%f",&salario);
	printf("Entre com o percentual de ajuste:\n");
	scanf("%f",&percentual);
	
	novo = (salario+salario)*(percentual/100);
	
	printf("Novo valor do salario:%f\n",novo);
	
	return 0;
}
