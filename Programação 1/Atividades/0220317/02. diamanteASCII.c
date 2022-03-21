#include <stdio.h>

int main()
{
  int n,num, i, j, inicio;
  inicio:
  printf("Insira a altura do diamante (numeros impares apenas): ");
  scanf("%d", &n);
  num = n;
  n = (n+1)/2;

/*----------metade de cima----------*/
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n-i; j++){printf(" ");}
		for (j = 1; j <= 2*i-1; j++){printf("*");}
		printf("\n");}
if(num%2==0){
/*----------metade de baixo---------*/
	for (i = 0; i <= n - 1; i++){
		for (j = 1; j <= i; j++){printf(" ");}
		for (j = 1 ; j <= 2*(n-i)-1; j++){printf("*");}
		printf("\n");}
}else{
/*----------metade de baixo---------*/
	for (i = 1; i <= n - 1; i++){
		for (j = 1; j <= i; j++){printf(" ");}
		for (j = 1 ; j <= 2*(n-i)-1; j++){printf("*");}
		printf("\n");}}}

