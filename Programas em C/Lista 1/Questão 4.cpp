#include <stdio.h>
#include <locale.h>
#define PI 3.1415
int main(){
	/*Fa�a um algoritmo que receba o raio de um c�rculo, calcule e imprima a �rea do c�rculo
(A = PIr2)*/
	setlocale(LC_ALL, "Portuguese");
	float r;
	printf("qual o raio do c�rculo? \n");
	scanf("%f", &r);
	printf("a �rea do c�rculo �: %.3f", PI*r*r);
	return 0;
}
