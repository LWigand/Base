#include<stdio.h>

// Dado o peso e a altura do usu´ario imprima seu ´Indice de Massa Corporal. IMC = peso/altura2

int main() {
	
	float imc,peso,altura;
	
	printf("Entre com o peso:\n");
	scanf("%f",&peso);
	
	printf("Entre com a altura:\n");
	scanf("%f",&altura);
	
	imc = (peso/altura*altura);
	
	printf("Indice de Massa Corporal:%f\n",imc);
	
	return 0;
}
