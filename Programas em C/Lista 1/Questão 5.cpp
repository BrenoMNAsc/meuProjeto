#include <stdio.h>
#include <locale.h>
int main(){
	/*Faça um algoritmo que peça a quantidade de horas trabalhas no mês e a quantidade de
dinheiro recebido por hora. O programa deve imprimir o total recebido no mês.*/
	setlocale(LC_ALL,"Portuguese");
	int h;
	float dr;
	printf("quantas horas você trabalhou esse mês? \n");
	scanf("%d", &h);
	printf("quanto você recebe por hora trabalhada? \n");
	scanf("%f", &dr);
	printf("Você recebeu um total de %.2f reais esse mês.", h*dr);
	return 0;
}
