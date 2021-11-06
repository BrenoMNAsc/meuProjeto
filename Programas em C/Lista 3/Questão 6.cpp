#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um programa que receba 3 notas de um aluno e mostre a média. O programa deve
ter validação de notas. Ou seja, se uma nota digitada for menor que 0 ou maior que 10, o
programa deve informar "nota inválida"e pedir para o usuário digitar a nota novamente.*/
	int i;
	float nota, soma = 0;
	for(i=1; i<=3; i++){
		printf("Digite sua nota %d\n", i);
		scanf("%f", &nota);
		while ((nota > 10)||(nota < 0)){
			printf("Nota inválida, digite novamente a nota %d\n", i);
			scanf("%f", &nota);
		}
		soma = soma + nota;
	}
	printf("Média: %.2f \n", soma/3);
	return 0;
}
