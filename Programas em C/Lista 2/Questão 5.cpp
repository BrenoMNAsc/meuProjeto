#include <stdio.h>
#include <locale.h>
int main(){
	/*Fa�a um programa que receba a massa e a altura de uma pessoa. O programa deve
calcular e imprimir o IMC dessa pessoa, al�m de, em seguida, informar qual situa��o a
pessoa se enquadra. O c�lculo do IMC � dado por: IMC*/
	setlocale(LC_ALL, "Portuguese");
	float massa,altura,imc;
	printf("digite sua altura (metros): \n");
	scanf("%f", &altura);
	printf("digite sua massa (quilos): \n");
	scanf("%f", &massa);
	imc = massa/(altura*altura);
	if (imc <= 20){
		printf("Abaixo do peso \n");
	} else if (imc > 20 && imc <= 25){
		printf("Peso normal \n");
	} else if (imc > 25 && imc <= 30){
		printf("Sobrepeso \n");
	} else if (imc >30 && imc <= 40){
		printf("Obesidade \n");
	} else if (imc > 40){
		printf("Obesidade M�rbida \n");
	}
	return 0;
}
