#include <stdio.h>
#include <locale.h>

int main(){
	/*Faça um programa que pergunte a quantidade de quilômetros percorridos por um carro
alugado e a quantidade de dias do aluguel. Calcule o preço do aluguel, levando em
consideração que o aluguel do carro custa R$ 60,00 por dia e R$ 0,15 por quilometro
rodado.*/
	setlocale(LC_ALL, "Portuguese");
	int dias;
	float quilometros;
	printf("qual a quantidade de quilômetros percorridos? \n");
	scanf("%f", &quilometros);
	printf("qual o total de dias do aluguel? \n");
	scanf("%d", &dias);
	printf("o preço total do aluguel é: %.2f", (float) dias*60+quilometros*0.15);
	return 0;
}
