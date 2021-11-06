#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int c, continuar;
	do{
	printf("Digite a temperatura em C°");
	scanf("%d", &c);
	printf("Deseja continuar? (1 - sim, 2 - não)");
	scanf("%d", &continuar);
	} while (continuar == 1);
	
return 0;
}
