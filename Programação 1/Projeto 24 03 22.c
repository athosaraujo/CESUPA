//Codigo por Athos Araujo, Davi Barral e Fernanda Panzera, EC1MA Sub-A

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
	
	int comeco, repeat = 0;
	char opcao;
	srand(time(NULL));
	
	comeco:
	printf("O que voce quer jogar? Selecione o numero da opcao desejada.\n"); 
	printf("1) 3 perguntas 	\t Desafio de matematica\n");
	printf("2) Adivinhe o numero \t Deducao e sorte\n");
	printf("3) Olhos de cobra \t Jogo de azar 1v1\n");
	printf("4) Sair\n");
	scanf("%c", &opcao);
	
	
	switch(opcao){


//3 perguntas
	case '1':
		system("cls");
 		printf("Por favor, insira o numero da alternativa desejada: \n");
 	do{
 		int a,a1,acerto=0;
 		a1:
			printf("Pergunta 1: Quanto eh 2+2? :\n");
			printf("1) 4\n");
			printf("2) 16\n");
			printf("3) 22\n");
			scanf("%d", &a);
			if(a==1){printf("Voce acertou!\n");++acerto;}
			 else if(a==4){printf("Voce quis dizer 1?\n");goto a1;}
			  else{printf("Voce errou, a alternativa correta era a primeira\n");}
 	
 		int b;
			printf("Pergunta 2: Quanto eh o valor aproxiamdo de pi? :\n");
			printf("1) 3.14159268\n");
			printf("2) 3.14159265\n");
			printf("3) 3.14159263\n");
			scanf("%d", &b);
			if(b==2){printf("Voce acertou!\n");++acerto;}
			 else{printf("Voce errou, a alternativa correta era a segunda\n");}
 	
 		int c;
			printf("Pergunta 3: Qual a sequencia correta para a tabela fibbonacci ate o oitavo digito?:\n");
			printf("1) 1 1 2 3 5 8 13 21\n");
			printf("2) 1 2 3 5 8 13 21 34\n");
			printf("3) 2 3 5 8 13 21 34 55\n");
			scanf("%d", &c);
			if(c==1){printf("Voce acertou!\n\n");++acerto;}
			 else{printf("Voce errou, a alternativa correta era a primeira\n\n");}
		 
 	printf("Voce acertou %d perguntas\n", acerto);
	printf("Voce deseja continuar? Se sim aperte 1, se deseja voltar ao menu, aperte qualquer tecla: ");
 	scanf("%d", &repeat);
 }while(repeat == 1);
	getchar();
	system("cls");
 	goto comeco;


//Adivinhe o numero;
	case '2':
	system("cls");
 		printf("Tente adivinhar um numero de 1 a 1000 \n");
 	do{
 		int chute, valor, i;
 		valor = rand() % 999;++valor;
 		
 		for(i=0;i<5;++i){
 			printf("Chute um valor: ");
			scanf("%d", &chute);
		 
		 	if(chute<valor){printf("Menor que o valor\n");}
			 else if(chute>valor){printf("Maior que o valor\n");}
			  else{printf("Voce acertou!\n");break;}
		 }
		if(chute !=valor){printf("O valor era %d\n", valor);}

	 printf("\nVoce deseja continuar? Se sim aperte 1, se deseja voltar ao menu, aperte qualquer tecla: ");
 	scanf("%d", &repeat);
 }while(repeat == 1);
	getchar();
	system("cls");
 	goto comeco;


//olhos de cobra
	case '3':
	system("cls");
	printf("Esse jogo precisa de duas pessoas para jogar, os jogadores competirao entre si para tentar chegar em 50 pontos.\n");
 	do{
 		int n1, n2, n3, n4,r1=0,r2=0, j1, j2, inicio1, inicio2;
		int start, end,reroll1, reroll2;
 		char nome1[50],nome2[50];
 	printf("Por favor, insira o nome do jogador numero um\n");getchar();gets(nome1);
	printf("\nPor favor, insira o nome do jogador numero dois\n");gets(nome2);
	
	start:
/* ---------------------------------------------------Jogador 01---------------------------------------------------*/
	n1 = rand() % 5;n2 = rand() % 5;
	n1 += 1;n2 += 1;
	inicio1 = r1;
	printf("\n%s, seus dados sao %d e %d\n", nome1, n1, n2);
	r1 += n1+n2;

	printf("Seu total eh %d\n", r1);
	if(r1>=50){printf("Parabens! Voce ganhou!");goto end;}

	reroll1:
		printf("Deseja rodar de novo? Se sim, aperte 1, se nao, qualquer tecla: ");
		scanf("%d", &j1);
	
	if(j1 == 1){
		n1 = rand() % 5;n2 = rand() % 5;
		n1++;n2++;
		printf("\n%s, seus dados sao %d e %d\n", nome1, n1, n2);
		if (n1 == 1 ^ n2 == 1){
			printf("Voce rodou 1, logo voce perdeu seu turno e os pontos acumulados no mesmo\n");
				r1 = inicio1;	
				printf("Seu total eh %d\n", r1);

		} else if (n1 == 1 && n2 == 1){
			printf("Voce rodou olhos de cobra e perdeu todos seus pontos\n");
				r1 = 0;
				printf("Seu total eh %d\n", r1);

		} else { 
		r1 += n1+n2;
		printf("Seu total eh %d\n", r1);
		if(r1>=50){printf("Parabens! Voce ganhou!");goto end;
		}
		goto reroll1;
	}}
/* ---------------------------------------------------Jogador 02---------------------------------------------------*/
	n3 = rand() % 5;n4 = rand() % 5;
	n3 += 1;n4 += 1;
	inicio2 = r2;
	
	
	printf("\n%s, seus dados sao %d e %d\n", nome2, n3, n4);
	r2 += n3+n4;
	printf("Seu total eh %d\n", r2);
	if(r2>=50){printf("Parabens! Voce ganhou!");goto end;}

	reroll2:
		printf("Deseja rodar de novo? Se sim, aperte 1, se nao, qualquer tecla: ");
		scanf("%d", &j2);
	
	if(j2 == 1){
		n3 = rand() % 5;n4 = rand() % 5;
		n3++;n4++;
		printf("\n%s, seus dados sao %d e %d\n", nome2, n3, n4);
		if (n3 == 1 ^ n4 == 1){
			printf("Voce rodou 1, logo voce perdeu seu turno e os pontos acumulados no mesmo\n");
				r2 = inicio2;	
				printf("Seu total eh %d\n", r2);

		} else if (n3 == 1 && n4 == 1){
			printf("Voce rodou olhos de cobra e perdeu todos seus pontos\n");
				r2 = 0;
				printf("Seu total eh %d\n", r2);

		} else { 
		r2 += n3+n4;
		printf("Seu total eh %d\n", r2);
		if(r2>=50){printf("Parabens! Voce ganhou!");goto end;
		}
		goto reroll2;
	}}

	goto start;
	end:
	printf("\nVoce deseja continuar? Se sim aperte 1, se deseja voltar ao menu, aperte qualquer tecla: ");
 	scanf("%d", &repeat);
 	}while(repeat == 1);

 	getchar();
	system("cls");
 	goto comeco;
  	
	case '4': 
	printf("Adeus!\n");
	break;
  	
	default: printf("Insira uma opcao valida\n"); getchar();goto comeco;
}}
