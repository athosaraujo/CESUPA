#include <stdio.h>
#include <math.h>
int main(){
	double area, perimetro, raio;
	const double  pi = 3.14159265;
	printf("Por favor insira o raio de seu angulo: ");
	scanf("%lf", &raio);
	perimetro = pi*2*raio;
	area = raio*raio*pi;
	printf("A area desse triangulo eh %.2lf\n", area);
	printf("O perimetro desse triangulo eh %.2lf\n", perimetro);
}