#include <stdio.h>
#include <locale.h>
int main(){
	/*Faça um programa que receba uma medida em metros e que imprima o equivalente em
centímentros.*/
	setlocale(LC_ALL, "Portuguese");
	float m;
	printf("digite a medida em metros: \n");
	scanf("%f", &m);
	printf("o valor em centímetros é: %.2fcm \n", m*100);
	return 0;
}
