#include<stdio.h>

/*Faca um algoritmo para ler os valores para as vari´aveis A e B, e efetuar a troca dos valores de forma que,
a vari´avel A passe a possuir o valor da vari´avel B e que a vari´avel B passe a possuir o valor da vari´avel A.
Apresentar os valores trocados*/

int main() {
	
	int a,b,x;
	printf("Entre com a variavel A:\n");
	scanf("%d",&a);
	printf("Entre com a variavel B:\n");
	scanf("%d",&b);
	
	x = a;
	a = b;
	b = x;
	
	printf("Valor atual da variavel A:%d\n",a);
	printf("Valor atual da variavel B:%d\n",b);
	
	return 0;
}
