#include <stdio.h>
#include <math.h>

int main(){
	double a, b, c, mais, menos, delta;
	printf("Por favor insira a, b, e c de sua equacao: ");
	scanf("%lf %lf %lf",&a,&b,&c);
	delta = b*b - (4*a*c);
	mais = (-b + sqrt(delta))/(2*a);
	menos = (-b - sqrt(delta))/(2*a);

	if(delta <= 0){
	printf("A equacao nao possui raizes reais\n");
	} else {
	
	printf("O valor de x1 eh %lf\n", mais);
	printf("O valor de x2 eh %lf\n", menos);
	}
}
