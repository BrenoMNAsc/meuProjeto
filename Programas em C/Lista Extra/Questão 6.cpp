#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Fa�a um algoritmo que leia 10 n�meros. O algoritmo deve imprimir a soma dos n�meros
digitados que s�o maiores do que 40.*/
	int i;
	int num, soma = 0;
	for(i = 1; i <= 10; i++){
		printf("Digite um n�mero: \n");
		scanf("%d", &num);
		if (num > 40){
		soma = soma + num;
		}
	}
	printf("A soma dos n�meros digitados que s�o maiores do que 40 �: %d \n", soma);
	return 0;
}
