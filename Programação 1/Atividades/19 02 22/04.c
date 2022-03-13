#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Insira os lados a, b e c de um triangulo: ");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a > b+c || b > a+c || c > b+a){
		printf("O triangulo nao eh valido\n");
	}
	else{
		printf("O triangulo eh valido\n");
		if(a==b && b == c){
			printf("O triangulo eh Equilatero\n");
		} else if (a==b || b == c || a == c){
			printf("O triangulo eh Isoceles\n");
		} else {
			printf("O triangulo eh Escaleno\n");
		}
	}
	return 0;
}
