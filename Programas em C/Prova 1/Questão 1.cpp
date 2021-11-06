#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int x;
	printf("Digite o valor de x:\n");
	scanf("%d", &x);
	if (x <= 1){
		printf("1 \n");
	} else if(x > 1 && x <= 2){
		printf ("2 \n");
	} else if(x > 2 && x <= 4){
		printf("%d", 2*x);
	} else if(x > 4){
		printf("%.2f", (float)(5*x + 3)/(x - 16));
	}
	return 0;
}
