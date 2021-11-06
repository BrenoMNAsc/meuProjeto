#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	/*Faça um algoritmo que receba um número n do usuário e calcule o valor da série S dos n
primeiros termos da série:*/
	int i,n;
	float s = 0;
	printf("Digite um número: \n");
	scanf("%d", &n);
	for (i=1; i<=n; i++) {
		if(i%2==1){
			s = s + (float)i/(i*i);
		} else {
			s = s - (float)i/(i*i);
		}
	}
	printf("%f", s);
	return 0;
}
