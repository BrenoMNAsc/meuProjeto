#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Fa�a um algoritmo que receba um n�mero digitado pelo usu�rio e imprima todos os
divisores do n�mero.*/
	int i,a,d;
	printf("Digite um n�mero: \n");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		if(a%i==0){
			printf("%d � divisor\n",i);			
		}
	}
}
