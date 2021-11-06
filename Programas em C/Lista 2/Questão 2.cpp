#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um algoritmo que receba um número x digitado pelo usuário. O programa deve
imprimir se x é impar ou par.*/
	int a;
	printf("Digite um número: \n");
	scanf("%d", &a);
	if (a%2==0){
		printf("o número é par \n");
	} else {printf("o número é impar");
	}
	return 0;
}
