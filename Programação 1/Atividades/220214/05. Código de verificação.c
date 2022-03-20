#include <stdio.h>

int main(){
	int n,a,b,c,d,e,f,soma,codigo,digito;
	printf("Entre com sua conta de tres digitos: ");
	scanf("%d",&n);
	a = n%10;
	b = n/10%10;
	c = n/100;
	soma = n+((a*100)+10*b)+c;
	d = soma%10;
	e = soma/10%10;
	f = soma/100;
	codigo = d+e*2+f*3;
	digito = codigo%10;
	printf("%d\n", codigo);
	printf("%d\n",digito);
}
