#include <stdio.h>
#include <locale.h>
int main(){
	/*Faça um algoritmo que receba a quantidade de votos nulos, brancos e válidos de uma
eleição. O programa deve imprimir o percentual de cada tipo de voto em relação ao
número total de eleitores.*/
	setlocale(LC_ALL, "Portuguese");
	int vn, b, vv, e;
	printf("qual a quantidade de votos nulos? \n");
	scanf("%d", &vn);
	printf("qual a quantidade de votos em branco? \n");
	scanf("%d", &b);
	printf("qual a quantidade de votos válidos? \n");
	scanf("%d", &vv);
	e = vn + b + vv;
	printf("a porcentagem de votos nulos é: %.2f, a porcentagem de votos em braco é: %.2f e a porcentagem de votos válidos é: %.2f \n",(float) vn/e*100,(float) b*e/100,(float) vv/e*100);
	return 0;
}
