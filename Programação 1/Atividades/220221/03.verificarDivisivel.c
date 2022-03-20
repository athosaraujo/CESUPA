#include <stdio.h>
int main(){
	int a;
	printf("por favor insira um numero: ");
	scanf("%d", &a);
	
	if(a%3 == 0 && a%7 == 0 && a!=0){
		printf("O numero eh divisivel por 3 e 7\n");
		if(a%2 == 0){
			printf("O numero tambem eh divisivel por 2\n");
		}
		else{
			printf("O numero nao eh divisivel por 2\n");
		}
	} else {
		printf("O numero nao eh divisivel por 3 e 7\n");
		if(a%4 == 0 && a!=0){
			printf("O numero eh divisivel por 4\n");
		}
		else{
			printf("O numero nao eh divisivel por 4\n");
		}
	}
}
