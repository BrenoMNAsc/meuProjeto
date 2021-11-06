#include <stdio.h>
#include <locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int a,b,c;
	printf("digite o primeiro numero: \n");
	scanf("%d", &a);
	printf("digite o segundo numero: \n");
	scanf("%d", &b);
	printf("digite o terceiro numero: \n");
	scanf("%d", &c);
	if((a>b) && (a>c)) {
		printf("%d é o maior de todos \n",a);
	} else if ((b>a) && (b>c)){
		printf("%d é o maior de todos \n",b);
	} else if ((c>a) && (c>b)){
		printf("%d é o maior de todos \n", c);
	}
	return 0;
	}

