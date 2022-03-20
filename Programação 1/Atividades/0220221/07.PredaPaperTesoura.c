#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
	int escolhaPC, comeco, replay; 
	int ganhou=0,perdeu=0;
	char pl, pc;
	printf("Bem vindo a rocha, papel ou tesoura!\n");
	comeco:
	printf("O que voce deseja jogar, (r)ocha, (p)apel ou (t)esoura?\n");
	scanf("%c", &pl);
	escolhaPC = rand() % 98; ++escolhaPC;
	  
	if(escolhaPC < 33){ pc = 'r';} else if(escolhaPC > 33 && escolhaPC < 66){ pc = 'p';}else{ pc = 't';}
	// Condition fest 2022
	if (pc == pl){printf("O jogo deu empate");}
		else if (pl == 'r' && pc =='t'){printf("Voce ganhou!");++ganhou;}
		else if (pl == 't' && pc == 'p'){printf("Voce ganhou!");++ganhou;}
		else if (pl == 'p' && pc == 'r'){printf("Voce ganhou!");++ganhou;}
		else if (pc == 'r' && pl == 't'){printf("Voce perdeu :c");++perdeu;}
		else if (pc == 't' && pl == 'p'){printf("Voce perdeu :c");++perdeu;}
		else if (pc == 'p' && pl == 'r'){printf("Voce perdeu :c");++perdeu;}
	printf("\nVoce escolheu %c e o computador escolheu %c\n", pl, pc);
	printf("Voce deseja jogar de novo? Se sim aperte 1, se nao, qualquer tecla: ");
	scanf("%d", &replay);
	if(replay == 1){getchar();goto comeco;} 
		else{printf("Voce ganhou %d vezes e perdeu %d vezes\n", ganhou, perdeu);}
	
	}
