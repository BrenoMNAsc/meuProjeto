#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL, "Portuguese");
	int idade, idadef=0, idadem=0, sexo, sexof=0, sexom=0, vac, vac1=0, vacm1 = 0, vacf2 = 0, vac2=0, nf = 0, nm= 0, nt=0, continuar;
	do {printf("Digite o valor da sexo (1 - masculino, 2 - feminino):\n");
	scanf("%d", &sexo);
		if (sexo == 1){
			printf ("digite sua idade: \n");
			scanf("%d", &idade);
			idadem=idadem+idade;
			printf("Você tomou a vacina? (1 - sim, 2 - não)\n");
			scanf("%d", &vac);
			if (vac == 1){
			vacm1=vacm1+1;
			nm ++;
			}
			printf("Continuar? (1 - sim, 2 - não)\n");
			scanf("%d", &continuar);
		}
			if (sexo == 2){
			printf ("digite sua idade: \n");
			scanf("%d", &idade);
			idadef=idadef+idade;
			printf("Você tomou a vacina? (1 - sim, 2 - não)\n");
			scanf("%d", &vac);
			if (vac == 2){
			vacf2=vacf2+1;
			nf ++;
			}
			printf("Continuar? (1 - sim, 2 - não)\n");
			scanf("%d", &continuar);
		}
		} while(continuar == 1);
		printf("A média de idade feminina é: %.2f \n", (float)(idadef/nf));
		printf("Percentual de mulheres que NÃO tomaram a vacina: %.2f \n", (float)(vacf2/nf)*100);
		printf("Percentual de homens que tomaram a vacina: %.2f \n", (float)(vacm1/nm)*100);
		printf("A média de idade masculina é: %.2f\n",(float)(idadem/nm));
		
	return 0;
}
