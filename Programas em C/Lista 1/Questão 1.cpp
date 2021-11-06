#include <stdio.h>
#include <locale.h>
int main(){
	/*Faça um algoritmo que receba um número digitado pelo usuário e escreva: "Numero
digitado: x". Nesse caso, x é o número digitado pelo usuário.*/
	setlocale(LC_ALL, "Portuguese");
	int valor;
	printf("Digite um valor \n");
	scanf("%d", &valor);
	printf("Número digitado: %d", valor);
	return 0;
}
