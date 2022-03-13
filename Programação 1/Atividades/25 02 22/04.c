#include <stdio.h>
#include <math.h>
int pg(int a, int b, int c){
	int i;
	for(i=0;i<c;++i){
	a = a * b;
}
	return a;
	}
int main(){
	int a, b, c;
	printf("por favor insira o numero inicial: ");
	scanf("%d", &a);
	printf("por favor insira a razao: ");
	scanf("%d", &b);
	printf("por favor insira a posicao desejada: ");
	scanf("%d", &c);
	printf("O %do valor da progressao geometrica eh %d\n",c, pg(a, b, c));
}
