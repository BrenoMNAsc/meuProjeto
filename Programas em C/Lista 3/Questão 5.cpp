#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Fa�a um programa que receba um n�mero inteiro do usu�rio (maior do que 1) e imprima
se ele � primo ou n�o.*/
	int i, a, nd = 0;
	printf("Digite um n�mero: \n");
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		if(a%i==0){
			nd++;
		}
	}
	if (nd==2){
		printf("� primo\n");
	} else {
		printf("n�o � primo \n");
	}
	return 0;
}
