#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um algoritmo que receba um número natural e imprima se ele é ou não triangular.
Um número natural é triangular se ele é produto de três números naturais consecutivos.
Exemplo: 120 é triangular, pois 4*5*6 = 120. O número 6 é triangular, já que 1*2*3 = 6.*/
	int i, a, triangular = 0, resul = i*(i+1)*(i+2);
	printf("Digite um número\n");
	scanf("%d", &a);
	while (resul<=a){
		if(resul==a){
			triangular = 1;
		}
		i++;
		resul = i*(i+1)*(i+2);
	}
	if (triangular == 1){
		printf("É triangular!");
	} else {
		printf("Não é triangular!");
	}
	return 0;
}
