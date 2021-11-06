#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Dada a serie de Fibonacci formada pela sequência 1, 1, 2, 3, 5, 8, 13, 21, 34..., crie um algo-
ritmo que receba um número n do usuário e que calcule e imprima a soma dos n primeiros
números da série.*/
	int a = 1, b = 1, atual, i, n, soma = 0;
	printf("Digite o valor de n: \n");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		if((i==1)||(i==2)){
			soma++;
		} else {
			atual = a+b;
			soma = soma+atual;
			a=b;
			b=atual;
		}
	}
	printf("Soma: %d\n", soma);
	return 0;
}
