#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Fa�a um algoritmo que receba dois n�meros a e b (a < b). Calcule a m�dia dos n�meros
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
	printf("A m�dia dos n�meros inteiros que existem entre a e b �: %.2f", (float)soma/qtd);
	return 0;
}
