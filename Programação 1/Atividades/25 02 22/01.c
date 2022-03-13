#include <stdio.h>
#include <math.h>

int main(){
	double i, P, m, n, valor, pot;
	printf("por favor insira a sua aplicação mensal: ");
	scanf("%lf", &P);
	printf("por favor insira a taxa: ");
	scanf("%lf", &i);
	printf("por favor insira o numero de meses: ");
	scanf("%lf", &n);
	m = 1+i;
	pot = pow(m, n);
	valor = P*((pot-1)/i);
	printf("Seu rendimento é de %.2lf\n", valor);
	return 0;
}
