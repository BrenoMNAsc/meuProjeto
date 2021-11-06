#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um algoritmo que receba dois números a e b (a < b). Calcule a média dos números
inteiros que existem entre a e b.*/
	int a,b,i, soma = 0, qtd = 0;
	printf("Digite um valor para a: \n");
	scanf("%d", &a);
	printf("Digite um valor para b (maior que a): \n");
	scanf("%d", &b);
	for(i = a; i<=b; i++){
		soma = soma + i;
		qtd++;	
	}
	printf("A média dos números inteiros que existem entre a e b é: %.2f", (float)soma/qtd);
	return 0;
}
