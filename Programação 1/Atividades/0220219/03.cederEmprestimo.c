#include <stdio.h>
int main(){
	int s, c;
	printf("Por favor insira seu salario bruto e o valor de seu credito: ");
	scanf("%d %d", &s, &c);
	
	if(c > s/100*30){
		printf("O emprestimo nao pode ser concedido");
	} else {
		printf("O empresimo pode ser cedido");
	}
}
