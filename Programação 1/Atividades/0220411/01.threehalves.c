#include <stdio.h>
int main(){
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;++i)printf("%.2d ", array[i]);
	printf("\n");
	for(int i=0;i<10;i++){
		if(i%2==0)printf("%.2d ", array[i]*3);
		else printf("%.2d ", array[i]/2);
	}
}
