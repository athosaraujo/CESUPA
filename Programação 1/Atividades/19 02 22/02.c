#include <stdio.h>

int main(){
	int a;
	printf("Enter an interger: ");
	scanf("%d", &a);
	
	if(a%3==0){
		printf("The number is divisible by 3");
	} else {
		printf("The number is not divisible by 3");
	} return 0;
}
