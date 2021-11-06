#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um algoritmo que receba um número digitado pelo usuário e imprima todos os
divisores do número.*/
	int i,a,d;
	printf("Digite um número: \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(a%i==0){
			printf("%d é divisor\n",i);			
		}
	}
}
