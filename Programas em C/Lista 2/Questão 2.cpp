#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Fa�a um algoritmo que receba um n�mero x digitado pelo usu�rio. O programa deve
imprimir se x � impar ou par.*/
	int a;
	printf("Digite um n�mero: \n");
	scanf("%d", &a);
	if (a%2==0){
		printf("o n�mero � par \n");
	} else {printf("o n�mero � impar");
	}
	return 0;
}
