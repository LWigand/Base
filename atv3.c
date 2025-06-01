#include<stdio.h>

/*Faca um Programa que pe¸ca o comprimento a largura e a altura de uma caixa d agua retangular. Calcule e
informe o volume da caixa.
*/

int main() {
	
	float comp,altura,largura,volume;
	
	printf("Entre com o comprimento:\n");
	scanf("%f",&comp);
	printf("Entre com a altura:\n");
	scanf("%f",&altura);
	printf("Entre com a largura:\n");
	scanf("%f",&largura);
	
	volume = (comp*altura*largura);
	printf("Volume igual a:%f\n",volume);
	
	return 0;
}
