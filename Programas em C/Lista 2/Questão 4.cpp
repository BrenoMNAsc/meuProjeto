#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a,b,c;
	printf("Digite tr�s n�meros: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a>b && a>c){
		printf("%d � maior. \n", a);
	} else if (b>c && b>a){
		printf("%d � maior \n", b);
	} else if (c>a && c>b){
		printf("%d � maior \n", c);
	}
	return 0;
	}
