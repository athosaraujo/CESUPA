#include <stdio.h>

int main(){
	int i, n1, n2, total, valor=2;
	printf("Insira o valor do primeiro termo: "); scanf("%d", &n1);
	printf("Insira o valor do segundo termo: "); scanf("%d", &n2);

	printf("01) %d\n",n1);
	printf("02) %d\n",n2);

	
		for(i = 3; i<=10; ++i){
		  if(i % 2 == 0){total = n2 - n1;}
		  else{total = n2 + n1;}
		    n1 = n2;
			  n2 = total;
			  ++valor;
		  printf("%.2d) %d\n",valor, total);}
}

