#include <stdio.h>
int main (){

  int a, b, c;
  printf("Por favor digite tres numeros ");
  scanf("%d %d %d", &a, &b, &c);
  printf("\nNumeros em ordem crescente: ");
  if (a <= b && b <= c){
    printf("%d, %d, %d \n",a,b,c);
  } else if (a <= c && c <= b){
      printf("%d, %d, %d \n",a,c,b);
    } else if (b <= a && a <= c){
        printf("%d, %d, %d \n",b,a,c);
      } else if (b <= c && c <= a){
         printf("%d, %d, %d \n",b,c,a);
        } else if (c <= a && a <= b){
            printf("%d, %d, %d \n",c,a,b);
          } else if (a == b && b == c){
              printf("%d, %d, %d \n",a,b,c);
            } else{
              printf("%d, %d, %d \n",c,b,a);
            }
            
    if( a == b || b == c || c == a){
		printf("Voce inseriu mais de uma vez o mesmo digito\n");
}
}
