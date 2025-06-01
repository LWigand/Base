#include<stdio.h>

// Leia um numero inteiro e imprima o seu antecessor e o seu sucessor.

int main() {
	
	int num,num1,num2;
	
	printf("Entre com o numero:\n");
	scanf("%d",&num);
	
	num1 = num - 1;
	num2 = num + 1;
	
	printf("Seu antecessor:%d\n",num1);
	printf("Seu sucessor:%d\n",num2);
	
	return 0;
}
