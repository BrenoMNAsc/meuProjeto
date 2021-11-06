#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um algoritmo que receba dois números a e b (a < b). Imprima a quantidade de
números múltiplos de 3 entre a e b.*/
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
	printf("Quantidade de múltiplos de 3 é %d \n", qtd);
}
