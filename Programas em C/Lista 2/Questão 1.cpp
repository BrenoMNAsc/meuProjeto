#include <stdio.h>
#include <locale.h>
int main(){
	/*Construa um algoritmo que leia tr�s n�meros do teclado e calcule a m�dia. Se a m�dia for
maior ou igual � sete, imprima: "Parab�ns, voc� foi aprovado!". Caso contr�rio, imprima:
"Voc� far� prova nal!".*/
setlocale(LC_ALL, "Portuguese");
float a,b,c,mf;
printf("digite as 3 notas: \n");
scanf("%f", &a);
scanf("%f", &b);
scanf("%f", &c);
mf = (a+b+c)/3;
if (mf>7){
	printf("Parab�ns, voc� foi aprovado!");
}
	printf("Voc� far� prova final!");
	return 0;
}
