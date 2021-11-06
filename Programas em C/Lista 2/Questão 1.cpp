#include <stdio.h>
#include <locale.h>
int main(){
	/*Construa um algoritmo que leia três números do teclado e calcule a média. Se a média for
maior ou igual à sete, imprima: "Parabéns, você foi aprovado!". Caso contrário, imprima:
"Você fará prova nal!".*/
setlocale(LC_ALL, "Portuguese");
float a,b,c,mf;
printf("digite as 3 notas: \n");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
mf = (a+b+c)/3;
if (mf>7){
	printf("Parabéns, você foi aprovado!");
}
	printf("Você fará prova final!");
	return 0;
}
