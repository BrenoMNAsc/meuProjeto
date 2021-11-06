#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	/*Faça um programa que receba um número inteiro entre um e nove e imprima a mensagem
que está relacionada com o número digitado de acordo com a tabela abaixo. Caso o
número digitado não esteja entre um e nove, imprima: "Código inválido".*/
int a;
printf("digite um número:");
scanf("%d", &a);
switch(a){
	case 1: printf("Lave as mãos. \n"); break;
	case 2: printf("Passe álcool em gel. \n"); break;
	case 3: printf("Use máscara. \n"); break;
	case 4: printf("Cuide dos idosos. \n"); break;
	case 5: printf("Cultive paciência. \n"); break;
	case 6: printf("Cultive sabedoria. \n"); break;
	case 7: printf("Ame o próximo. \n"); break;
	case 8: printf("Exercite a disciplina. \n"); break;
	case 9: printf("Acalme a mente. \n"); break;
	default: printf("Código inválido.\n"); break;	
}
	return 0;
}
