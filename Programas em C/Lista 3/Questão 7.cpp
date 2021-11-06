#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um algoritmo que recebe dez números digitados pelo usuário. Após isso, o algoritmo
deve informar o maior e o menor número digitado (Utilize estruturas de repetição).*/
	int i, n, maior, menor;
	for(i=1; i <= 10; i++){
		printf("Digite um número\n");
		scanf("%d\n", &n);
		if(i==1){
			maior = n;
			menor = n;
		} else {
			if(n > maior){
				maior = n;
			}
			if (n < menor){
				menor = n;
			}
		}
	}
	printf(" o maior é %d\n", maior);
	printf(" o menor é %d\n", menor);
	return 0;
}
