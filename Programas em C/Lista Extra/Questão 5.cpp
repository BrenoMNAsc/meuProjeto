#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Fa�a um programa que leia 3 notas, calcule e imprima a m�dia das notas. Ap�s isso,
o programa deve perguntar se o usu�rio deseja continuar (1 - SIM, 2 - N�O). Caso o
usu�rio digite 1, o programa deve repetir o processo anterior. Caso o usu�rio digite 2, o
programa dever� ser encerrado.*/
int c;
float n1, n2, n3, m;
 do{
 	printf("Digite o valor das 3 notas \n");
 	scanf("%f", &n1);
 	scanf("%f", &n2);
 	scanf("%f", &n3);
 	m = (n1+n2+n3)/3;
 	printf("A m�dia de notas �: %.2f \n", m);
 	printf("Deseja continuar? (1 - SIM, 2 - N�O) \n");
 	scanf("%d", &c);
 }
	while(c==1);
	return 0;
}
