#include <stdio.h>
#include <locale.h>
int main(){
	/*Fa�a um algoritmo que receba a quantidade de votos nulos, brancos e v�lidos de uma
elei��o. O programa deve imprimir o percentual de cada tipo de voto em rela��o ao
n�mero total de eleitores.*/
	setlocale(LC_ALL, "Portuguese");
	int vn, b, vv, e;
	printf("qual a quantidade de votos nulos? \n");
	scanf("%d", &vn);
	printf("qual a quantidade de votos em branco? \n");
	scanf("%d", &b);
	printf("qual a quantidade de votos v�lidos? \n");
	scanf("%d", &vv);
	e = vn + b + vv;
	printf("a porcentagem de votos nulos �: %.2f, a porcentagem de votos em braco �: %.2f e a porcentagem de votos v�lidos �: %.2f \n",(float) vn/e*100,(float) b*e/100,(float) vv/e*100);
	return 0;
}
