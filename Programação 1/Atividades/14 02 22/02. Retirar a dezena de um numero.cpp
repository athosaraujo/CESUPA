#include <stdio.h>

int main(){
    int a, b, c;
	printf("enter a number with three or more digits: ");
	scanf("%i", &a);
	b = a%100;
	c = b/10;
	printf("%i", c);
}