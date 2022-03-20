#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c, i;
	printf("por favor insira o numero inicial: ");
	scanf("%d", &a);
	printf("por favor insira a razao: ");
	scanf("%d", &b);
	printf("por favor insira a posicao desejada: ");
	scanf("%d", &c);
	for(i=0;i<c-1;++i){a = a * b;}
	printf("O %do valor da progressao geometrica eh %d\n",c, a);
}
