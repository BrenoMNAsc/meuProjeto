#include <stdio.h>
#include <locale.h>
int main(){
	/*Fa�a um algoritmo que receba dois n�meros digitados pelo usu�rio e imprima a multipli-
ca��o entre eles.*/
	setlocale(LC_ALL, "Portuguese");
	int a, b;
	printf ("digite o primeiro valor: \n");
	scanf("%d", &a);
	printf("digite o segundo valor: \n");
	scanf("%d", &b);
	printf("o produto dos dois valores �: %d \n", a*b);
	return 0;
}
