// Codigo por Athos e Davi
#include <stdio.h>

int main(){
	double custo, numCoelhos;
	printf("Por favor insira o numero de coelhos que voce deseja criar: ");
	scanf("%lf", &numCoelhos);
	
	custo = ((numCoelhos*0.70)/18)+10;	
	printf("O valor do custo de criacao dos coelhos eh: %.2lf\n", custo);
	return 0;
}

