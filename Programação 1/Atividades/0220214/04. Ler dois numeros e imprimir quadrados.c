#include <stdio.h>
#include <math.h>
int main(){
	int a, b, c, d;
	printf("digite dois numeros: ");
	scanf("%d %d", &a, &b);
	c = (a-b)*(a-b);
	d = pow(a, 2) - pow(b, 2);
	printf("O quadrado da diff eh: %d\n", c);
	printf("A diff dos quadrados eh: %d\n", d);
}