// Codigo por Athos e Davi

//Entrar com um ângulo em graus e imprimir: seno, cosseno, tangente, secante, cossecante e cotangente deste ângulo. 
#include <stdio.h>
#include <math.h>
int main(){
	double angulo,sen,cosen,tang;
	printf("por favor insira o angulo desejado: ");
	scanf("%lf", &angulo);
	sen = sin(angulo);
		printf("O seno de %.2lf eh %.2lf\n", angulo, sen);
	cosen = cos(angulo);
		printf("O cosseno de %.2lf eh %.2lf\n", angulo, cosen);
	tang = tan(angulo);
		printf("O tan de %.2lf eh %.2lf\n\n", angulo, tang);
	
	//cossecante
	if(angulo != 0 && angulo != 180 && angulo != 360){
		printf("O cossecante de %.2lf eh %.2lf\n", angulo, 1/sen);
	} else {
		printf("O angulo nao possui cossecante\n");
}
	//secante
	if(angulo != 90 && angulo != 270){
		printf("O secante de %.2lf eh %.2lf\n", angulo, 1/cosen);
	} else {
		printf("O angulo nao possui secante\n");
}
	//cotangente
	if(angulo != 0){
		printf("A cotangente de %.2lf eh %.2lf\n", angulo, 1/tang);
	} else {
		printf("O angulo nao possui cotangente\n");
}
}
