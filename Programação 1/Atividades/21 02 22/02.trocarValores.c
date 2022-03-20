#include <stdio.h>
int main(){
	int a, b,c;
	printf("Insira o valor de a: ");
	scanf("%d", &a);
	printf("Insira o valor de b: ");
	scanf("%d", &b);
	printf("valor de a e b sao: %d %d\n", a, b);
	a -= b;	b += a;	a = b - a;
	printf("Depois da troca os valores de a e b sao: %d %d\n", a, b);
}
