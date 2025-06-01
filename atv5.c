#include<stdio.h>

/*Prepare um algoritmo para calcular o espaco percorrido por um movel em movimento retil´ineo uniforme dada a
seguinte formula:
S = So + V * T. Inicialmente o algoritmo devera perguntar ao usuario os valores do espaco inicial(So), da
velocidade(V ) e do tempo(T). Apos a entrada dos devidos valores estes devem ser substituidos na formula,
resultando assim no espaco percorrido(S) que devera ser informado na tela do usuario.*/

int main() {
	
	float so,v,t,s;
	printf("Entre com o espaco inicial:\n");
	scanf("%f",&so);
	printf("Entre com a velocidade:\n");
	scanf("%f",&v);
	printf("Entre com o tempo:\n");
	scanf("%f",&t);
	
	s = (so + v * t);
	
	printf("O espaco pecorrido foi de:%f\n",s);
	
	return 0;
}
