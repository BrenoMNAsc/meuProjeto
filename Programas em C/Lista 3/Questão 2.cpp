#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese");
	/*Fa�a um algoritmo que receba um n�mero n do usu�rio e calcule o valor da s�rie S dos n
primeiros termos da s�rie:*/
	int i,n;
	float s = 0;
	printf("Digite um n�mero: \n");
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
