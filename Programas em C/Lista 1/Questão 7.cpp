#include <stdio.h>
#include <locale.h>

int main(){
	/*Fa�a um programa que pergunte a quantidade de quil�metros percorridos por um carro
alugado e a quantidade de dias do aluguel. Calcule o pre�o do aluguel, levando em
considera��o que o aluguel do carro custa R$ 60,00 por dia e R$ 0,15 por quilometro
rodado.*/
	setlocale(LC_ALL, "Portuguese");
	int dias;
	float quilometros;
	printf("qual a quantidade de quil�metros percorridos? \n");
	scanf("%f", &quilometros);
	printf("qual o total de dias do aluguel? \n");
	scanf("%d", &dias);
	printf("o pre�o total do aluguel �: %.2f", (float) dias*60+quilometros*0.15);
	return 0;
}
