#include <stdio.h>
#include <locale.h>
int main(){
	/*Faça um algoritmo que receba dois números digitados pelo usuário e imprima a multipli-
cação entre eles.*/
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	printf ("digite o primeiro valor: \n");
	scanf("%d", &a);
	printf("digite o segundo valor: \n");
	scanf("%d", &b);
	printf("o produto dos dois valores é: %d \n", a*b);
	return 0;
}
