#include <stdio.h>
#include <locale.h>

int main(){
	/*Fa�a um programa que pergunte quanto voc� ganha por m�s. Calcule e imprima: i)
Sal�rio bruto; ii) Quanto pagou de imposto (8%); iii) Quanto pagou ao sindicato (5%);
iv) Sal�rio l�quido.*/
	setlocale(LC_ALL, "Portuguese");
	float salario, imposto, sindicato;
	printf("Qual o valor do seu sal�rio? \n");
	scanf("%f", &salario);
	imposto = salario*0.08;
	sindicato = salario*0.05;
	printf("Voc� pagou R$ %.2f de imposto, R$ %0.2f para o sindicato e R$ %0.2f � o valor do seu sal�rio l�quido.", imposto, sindicato, salario-imposto-sindicato);
	return 0;
}

