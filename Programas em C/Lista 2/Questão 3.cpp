#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int a,b;
	printf("digite dois n�meros: \n");
	scanf("%d", &a);
	scanf("%d", &b);
	if(a%b==0){
	printf("o primeiro � divisivel pelo segundo!");
	} else {
	printf("o primeiro n�o � divisivel pelo segundo!");
	}
	return 0;
}
