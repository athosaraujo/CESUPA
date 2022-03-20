#include <stdio.h>
#include <math.h>
int digitos = 0,interacoes = 0,mod,div, prod, n;
int a,i = 1,soma = 0;
/*-------------------------------------------------------------------------------------------------------------------------------------*/
int contarDigitos(int x){
	do {
	x /= 10;
    ++digitos;
  } while (x!= 0);
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
int verificarNumero(int x){
	while(interacoes<=digitos){
	i = i * 10;
	div = i/10;	mod = a%i; 
	prod = mod/div;
	soma += pow(prod, digitos);	
	++interacoes;}
	if (soma == a){printf("Voce inseriu um numero Armstrong!\n");} 
		else {printf("Voce nao inseriu um numero Armstrong :c \n");}	
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
int main(){
	printf("Por favor, insira o valor do numero que voce deseja descobrir se eh um numero Armstrong ou nao: ");scanf("%d", &a);
	n = a;	
	contarDigitos(a);
	verificarNumero(a);  
}
