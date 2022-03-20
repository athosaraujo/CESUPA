#include <stdio.h>
#include <math.h>
int main(){
	int n, nmais = 0, nmenos;

	printf("Insira um numero diferente de 1: ");
	scanf("%d", &n);
	nmenos = n;
	printf("Decrescente\tCrescente\n");
	for (int i = 0; i<n;++i){
		printf("    %.2d\t\t",nmenos);
		nmais += 1; nmenos -= 1;
		printf("    %.2d\n",nmais);}}
