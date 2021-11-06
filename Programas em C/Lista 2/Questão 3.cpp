#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a,b;
	printf("digite dois números: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	if(a%b==0){
	printf("o primeiro é divisivel pelo segundo!");
	} else {
	printf("o primeiro não é divisivel pelo segundo!");
	}
	return 0;
}
