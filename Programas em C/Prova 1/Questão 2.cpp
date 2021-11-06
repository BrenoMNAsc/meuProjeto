#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int n, p, fatn, fatnp;
	int np = (n - p);
	float total;
	printf("Digite o valor de n:\n");
	scanf("%d", &n);
	printf("Digite o valor de p:\n");
	scanf("%d", &p);
	for(fatn = 1; n > 1; n--){
		fatn = fatn * n;
	}
	for(fatnp = 1; np > 1; np--){
		fatnp = fatnp * np;
	}
	total = fatn/fatnp;
	printf("%.2f", total);
	return 0;
}
