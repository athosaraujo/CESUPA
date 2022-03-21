#include <stdio.h>

int main()
{
  int n, i, j, inicio;
  inicio:
  printf("Insira a altura do diamante (numeros impares apenas): ");
  scanf("%d", &n);
  if(n %2 == 0 ){printf("insira um valor valido\n"); goto inicio;}
  n = (n+1)/2;

/*----------metade de cima----------*/
  for (i = 1; i <= n; i++){
    for (j = 1; j <= n-i; j++)printf(" ");
    for (j = 1; j <= 2*i-1; j++)printf("*");
    printf("\n");}
/*----------metade de baixo---------*/
	for (i = 1; i <= n - 1; i++){
		for (j = 1; j <= i; j++)
		printf(" ");
		for (j = 1 ; j <= 2*(n-i)-1; j++)
		printf("*");printf("\n");}
}
