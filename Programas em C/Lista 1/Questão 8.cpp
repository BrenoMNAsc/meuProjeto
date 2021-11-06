#include <stdio.h>
#include <locale.h>

int main(){
	/*Faça um programa que pergunte quanto você ganha por mês. Calcule e imprima: i)
Salário bruto; ii) Quanto pagou de imposto (8%); iii) Quanto pagou ao sindicato (5%);
iv) Salário líquido.*/
	setlocale(LC_ALL, "Portuguese");
	float salario, imposto, sindicato;
	printf("Qual o valor do seu salário? \n");
	scanf("%f", &salario);
	imposto = salario*0.08;
	sindicato = salario*0.05;
	printf("Você pagou R$ %.2f de imposto, R$ %0.2f para o sindicato e R$ %0.2f é o valor do seu salário líquido.", imposto, sindicato, salario-imposto-sindicato);
	return 0;
}

