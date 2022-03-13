#include <stdio.h>
int main(){
	double temp, veloc, comb, dist;
	printf("O carro consome 12 litros por kilometro\n");
	printf("Por favor insira a velocidade media da viagem em km/h: ");
	scanf("%lf", &veloc);
	
	printf("Por favor insira o tempo de viagem em horas: ");
	scanf("%lf", &temp);
	dist = temp*veloc;
	printf("A distancia viajada em km foi: %.0lf\n", dist);
	comb = 12*dist;
	printf("O numero de litros gastos na viagem em litros foi: %.0lf\n", comb);
}
