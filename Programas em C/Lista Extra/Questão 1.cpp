#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Fa�a um algoritmo que receba dois n�meros a e b (a < b). Imprima a quantidade de
n�meros m�ltiplos de 3 entre a e b.*/
	int a,b,i, qtd = 0;
	printf("Digite um valor para a: \n");
	scanf("%d", &a);
	printf("Digite um valor para b (maior que a): \n");
	scanf("%d", &b);
	for(i = a; i<=b; i++){
		if(i%3==0){
			qtd++;
		}
	}
	printf("Quantidade de m�ltiplos de 3 � %d \n", qtd);
}
