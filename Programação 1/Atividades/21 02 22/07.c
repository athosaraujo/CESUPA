#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//(r)ocha (p)apel ou (t)esoura
int jogo(char pl, char pc){
	if(pl == pc){
		return -1;
	}
	if(pl == 'r' && pc == 'p'){
		return 0;
	}
		else if(pl == 'p' && pc == 'r'){
			return 1;
		}
	if(pl == 'p' && pc == 't'){
		return 0;
	}
		else if(pl == 't' && pc == 'p'){
			return 1;
		}
	if(pl == 't' && pc == 'r'){
		return 0;
	}
		else if(pl == 'r' && pc == 't'){
			return 1;
		}
}

int main(){
	int n, opcao = 0, v=0, d=0;
	char pl, pc, resultado;
	
	do{
	srand(time(NULL));
	n = rand() % 100;
	
	printf("Bem vindo a Rocha, Papel ou Tesoura, por favor selecione sua escolha, r/p/t: ");
	fflush(stdin);
	scanf("%c", &pl);
	
	if(n < 33){
		pc = 'r';
	} else if(n > 33 && n < 66){
		pc = 'p';
	} else {
		pc = 't';
	}
	resultado = jogo(pl, pc);
	
	if (resultado == -1) {
        printf("O jogo deu empate!\n");
    }
    else if (resultado == 1) {
        printf("Voce ganhou o jogo!\n"); ++v;
    }
    else {
        printf("Voce perdeu o jogo :(\n");++d;
    }
    printf("Voce escolheu %c, o computador escolheu %c\n",pl, pc);
	printf("Digite 1 para continuar jogando: ");
    scanf("%d", &opcao);}
    
    while(opcao == 1);
	printf("Voce ganhou %d vezes e perdeu %d vezes", v, d);
    return 0;
}
