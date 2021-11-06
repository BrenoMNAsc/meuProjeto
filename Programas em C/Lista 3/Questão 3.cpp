#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um algoritmo que receba um número digitado pelo usuário e imprima todos os
divisores do número.*/
	int a, b, i, total = 0;
	printf("Digite um número: \n");
	scanf("%d", &a);
	printf("Digite um número: \n");
	scanf("%d", &b);
	for(i=0; i<a; i++){
	total = total + b;
	}
	printf("%d x %d = %d",a, b, total);
	return 0;
}
