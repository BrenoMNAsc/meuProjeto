#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um algoritmo que leia 10 números. O algoritmo deve imprimir a soma dos números
digitados que são maiores do que 40.*/
	int i;
	int num, soma = 0;
	for(i = 1; i <= 10; i++){
		printf("Digite um número: \n");
		scanf("%d", &num);
		if (num > 40){
		soma = soma + num;
		}
	}
	printf("A soma dos números digitados que são maiores do que 40 é: %d \n", soma);
	return 0;
}
