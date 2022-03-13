#include <stdio.h>

int main(){
	int a,b;
	printf("Enter two intergers: ");
	scanf("%d %d",&a,&b);
	 
	if(a+b>=10){
		printf("The sum of the numbers is %d", a+b);
	} else{
		printf("The values inputed are not enough");
	}
}	
