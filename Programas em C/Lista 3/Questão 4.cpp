#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Fa�a um algoritmo que receba um n�mero natural e imprima se ele � ou n�o triangular.
Um n�mero natural � triangular se ele � produto de tr�s n�meros naturais consecutivos.
Exemplo: 120 � triangular, pois 4*5*6 = 120. O n�mero 6 � triangular, j� que 1*2*3 = 6.*/
	int i, a, triangular = 0, resul = i*(i+1)*(i+2);
	printf("Digite um n�mero\n");
	scanf("%d", &a);
	while (resul<=a){
		if(resul==a){
			triangular = 1;
		}
		i++;
		resul = i*(i+1)*(i+2);
	}
	if (triangular == 1){
		printf("� triangular!");
	} else {
		printf("N�o � triangular!");
	}
	return 0;
}
