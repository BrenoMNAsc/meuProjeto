#include <stdio.h>
#include <locale.h>
int main(){
	/*Fa�a um algoritmo que receba um n�mero digitado pelo usu�rio e escreva: "Numero
digitado: x". Nesse caso, x � o n�mero digitado pelo usu�rio.*/
	setlocale(LC_ALL, "Portuguese");
	int valor;
	printf("Digite um valor \n");
	scanf("%d", &valor);
	printf("N�mero digitado: %d", valor);
	return 0;
}
