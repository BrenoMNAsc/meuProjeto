#include <stdio.h>
#include <locale.h>
int main(){
	/*Fa�a um algoritmo que pe�a a quantidade de horas trabalhas no m�s e a quantidade de
dinheiro recebido por hora. O programa deve imprimir o total recebido no m�s.*/
	setlocale(LC_ALL,"Portuguese");
	int h;
	float dr;
	printf("quantas horas voc� trabalhou esse m�s? \n");
	scanf("%d", &h);
	printf("quanto voc� recebe por hora trabalhada? \n");
	scanf("%f", &dr);
	printf("Voc� recebeu um total de %.2f reais esse m�s.", h*dr);
	return 0;
}
