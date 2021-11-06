#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um algoritmo que receba dois números a e b (a < b). Calcule a soma dos números
pares que existem entre a e b.*/
	int a,b,i, soma = 0;
	printf("Digite um valor para a: \n");
	scanf("%d", &a);
	printf("Digite um valor para b (maior que a): \n");
	scanf("%d", &b);
	for(i = a; i<=b; i++){
		if(i%2==0){
			soma = soma + i;
		}
	}
	printf("A soma dos números pares que existem entre a e b é: %d", soma);
}
