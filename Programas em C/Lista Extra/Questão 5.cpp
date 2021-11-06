#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um programa que leia 3 notas, calcule e imprima a média das notas. Após isso,
o programa deve perguntar se o usuário deseja continuar (1 - SIM, 2 - NÃO). Caso o
usuário digite 1, o programa deve repetir o processo anterior. Caso o usuário digite 2, o
programa deverá ser encerrado.*/
int c;
float n1, n2, n3, m;
 do{
 	printf("Digite o valor das 3 notas \n");
 	scanf("%f", &n1);
 	scanf("%f", &n2);
 	scanf("%f", &n3);
 	m = (n1+n2+n3)/3;
 	printf("A média de notas é: %.2f \n", m);
 	printf("Deseja continuar? (1 - SIM, 2 - NÃO) \n");
 	scanf("%d", &c);
 }
	while(c==1);
	return 0;
}
