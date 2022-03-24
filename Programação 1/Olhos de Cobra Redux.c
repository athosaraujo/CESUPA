#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int x1, x2;
char j;
int jogo(int res,int ini,char nome[]){
	int start;
	x1 = rand()%5;++x1;x2 = rand()%5;++x2;
	res += x1+x2;
	printf("%s voce rodou %d e %d\n", nome,x1,x2);
	printf("Seu valor atual e %d\n",res);

	start:
	if(res>=50){return res;}
	printf("Voce deseja rodar de novo? se sim aperte 1: ");
	scanf("%c",&j);getchar();
	
	switch(j){ // Reroll
		case '1': 
			x1 = rand()%5;++x1;x2 = rand()%5;++x2;
			printf("Voce rodou %d e %d\n",x1,x2);

			if (x1 == 1 ^ x2 == 1){
				printf("Voce rodou 1 em um dado, logo voce perdeu seus pontos do turno\n");
				res=ini;
				printf("Seu valor atual e %d\n\n",res);
				break;}
			else if (x1 == 1 && x2 == 1){
				printf("Voce rodou olhos de cobra, logo voce perdeu todos seus pontos e o turno\n");
				res=0;
				printf("Seu valor atual e %d\n\n",res);
				break;}
			else{
				res += x1+x2;
				printf("Seu valor atual e %d\n",res);
				goto start;}
		default: printf("\n"); break;	
		
			}return res;}
int main(){
	srand(time(NULL));
	char nome1[25],nome2[25];
	int resul1=0,resul2=0,ini1, ini2, primeiro;
	printf("Insira o nome do primeiro jogador: ");gets(nome1);
	printf("Insira o nome do segundo jogador: ");gets(nome2);
	primeiro = rand()%5;++primeiro;
	if(primeiro % 2 == 0){
		printf("%s, voce vai primeiro\n", nome1);
		do{	
			ini1=resul1;ini2=resul2;
			resul1 = jogo(resul1,ini1,nome1);
			resul2 = jogo(resul2,ini2,nome2);
		}while(resul1<50 && resul2<50);}
	else{
		printf("%s, voce vai primeiro\n", nome2);
		do{	
			ini1=resul1;ini2=resul2;
			resul2 = jogo(resul2,ini2,nome2);			
			resul1 = jogo(resul1,ini1,nome1);
		}while(resul1<50 && resul2<50);}

	if(resul1>=50)printf("Parabens %s!, voce ganhou!",nome1);
	else printf("Parabens %s!, voce ganhou!",nome2);}
