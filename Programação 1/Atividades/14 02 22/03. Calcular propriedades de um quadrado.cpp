#include <stdio.h>
#include <math.h>

int main(){
		double a, b, c, d;
		printf("Insira o tamanho do lado do quadrado: ");
		scanf("%lf", &a);
		b = 4*a;
		c = pow(a, 2);
		d = a*sqrt(2);
		printf("O perimetro do quadrado eh %.2lf\n", b);
		printf("A area do quadrado eh %.2lf\n", c);
		printf("O tamanho da diagnoal do quadrado eh %.2lf\n", d);		
}