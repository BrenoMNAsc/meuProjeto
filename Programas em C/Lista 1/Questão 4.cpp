#include <stdio.h>
#include <locale.h>
#define PI 3.1415
int main(){
	/*Faça um algoritmo que receba o raio de um círculo, calcule e imprima a área do círculo
(A = PIr2)*/
	setlocale(LC_ALL, "Portuguese");
	float r;
	printf("qual o raio do círculo? \n");
	scanf("%f", &r);
	printf("a área do círculo é: %.3f", PI*r*r);
	return 0;
}
