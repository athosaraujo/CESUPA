// Codigo por Athos e Davi
/*Uma tonelada m�trica, ou simplesmente tonelada, equivale a 35273,92 on�as. 
Escreva um programa que leia o peso de um pacote de cereal em on�as e apresente na sa�da o peso em toneladas m�tricas, 
assim como o n�mero de caixas necess�rias para fornecer uma tonelada m�trica de cereal.*/
#include <stdio.h>
#include <math.h>
int main(){
	int i = 0;
	double oz, kg1, kg2;
	printf("Insira o peso em oz. da caixa de cereal: ");
	scanf("%lf", &oz);
	
	const double ton = oz/35273.92;
	printf("O peso da caixa eh de %.10lf toneladas\n", ton);

	kg1 = oz *0.0283495;
	kg2 = kg1;
	kg1 = 0;
	
	while(kg1 < 1000){
	kg1 = kg1 + kg2;
	i++;
}
	printf("O numero nescessario de caixas para se ter uma tonelada eh %d\n", i);
	return 0;
}
