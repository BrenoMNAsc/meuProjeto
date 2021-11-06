#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um programa que receba um número inteiro do usuário (maior do que 1) e imprima
se ele é primo ou não.*/
	int i, a, nd = 0;
	printf("Digite um número: \n");
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		if(a%i==0){
			nd++;
		}
	}
	if (nd==2){
		printf("é primo\n");
	} else {
		printf("não é primo \n");
	}
	return 0;
}
