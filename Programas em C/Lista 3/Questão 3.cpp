#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Fa�a um algoritmo que receba um n�mero digitado pelo usu�rio e imprima todos os
divisores do n�mero.*/
	int a, b, i, total = 0;
	printf("Digite um n�mero: \n");
	scanf("%d", &a);
	printf("Digite um n�mero: \n");
	scanf("%d", &b);
	for(i=0; i<a; i++){
	total = total + b;
	}
	printf("%d x %d = %d",a, b, total);
	return 0;
}
