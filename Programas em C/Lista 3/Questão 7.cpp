#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Fa�a um algoritmo que recebe dez n�meros digitados pelo usu�rio. Ap�s isso, o algoritmo
deve informar o maior e o menor n�mero digitado (Utilize estruturas de repeti��o).*/
	int i, n, maior, menor;
	for(i=1; i <= 10; i++){
		printf("Digite um n�mero\n");
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
	printf(" o maior � %d\n", maior);
	printf(" o menor � %d\n", menor);
	return 0;
}
