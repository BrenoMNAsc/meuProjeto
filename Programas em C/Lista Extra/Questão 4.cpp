#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um algoritmo que receba um valor n e calcule n!.*/
	int a, i, fat;
	printf("Digite um valor para a: \n");
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		fat *= i;
	}
	printf("O valor de %d! é:\n", fat);
	return 0;
}
