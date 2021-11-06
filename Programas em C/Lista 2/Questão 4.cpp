#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a,b,c;
	printf("Digite três números: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a>b && a>c){
		printf("%d é maior. \n", a);
	} else if (b>c && b>a){
		printf("%d é maior \n", b);
	} else if (c>a && c>b){
		printf("%d é maior \n", c);
	}
	return 0;
	}
