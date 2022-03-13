// Codigo por Athos e Davi
#include <stdio.h>
#include <math.h>

int main(){
	double n1, n2;
	char operador;
	
	printf("Legenda:\n '+'  Soma          | '-'  Subtracao\n '*'  Multiplicacao | '/'  Divisao\n '^' Exponenciacao  | 'r' Radiciacao\n");
	printf("Por favor selecione sua operacao: ");
	scanf("%c", &operador);
	
	switch(operador){
		case '+':
			printf("Por favor insira os numeros a serem somados: ");
			scanf("%lf %lf", &n1,&n2);
			printf("O resultado de %.2lf + %.2lf eh %.2lf\n",n1,n2,n1+n2);
			break; 
		case '-':
			printf("Por favor insira o numero inicial e o valor a ser subitraido: ");
			scanf("%lf %lf", &n1,&n2);
			printf("O resultado de %.2lf - %.2lf eh %.2lf\n",n1,n2,n1-n2);
			break;
		case '*':
			printf("Por favor insira os numeros a serem multiplicados: ");
			scanf("%lf %lf", &n1,&n2);
			printf("O resultado de %.2lf * %.2lf eh %.2lf\n",n1,n2,n1*n2);
			break;
		case '/':
			printf("Por favor insira o dividendo e o divisor: ");
			scanf("%lf %lf", &n1,&n2);
			printf("O resultado de %.2lf divido por %.2lf eh %.2lf\n",n1,n2,n1/n2);
			break;
		case '^':
			printf("Por favor insira o valor que voce deseja elevar e o exponente: ");
			scanf("%lf %lf", &n1,&n2);
			printf("O valor de %.2lf elevado a %.2lf eh %.2lf\n",n1,n2,pow(n1,n2));
			break;
		case 'r':
			printf("Por favor diga o indice e o radicando: ");
			scanf("%lf %lf", &n1,&n2);
			if(n1 == 2){
				printf("A raiz quadrada de %.2lf eh %.2lf\n",n2,pow(n2,(1/n1)));
				break;
			} else if( n1 == 3){
				printf("A raiz cubica de %.2lf eh %.2lf\n",n2,pow(n2,(1/n1)));
				break;
			} else {
			printf("A raiz %.0lfa de %.2lf eh %lf\n",n1,n2,pow(n2,(1/n1)));
			break;
		}
		default:
		printf("operacao invalida, por favor insira um operador valido, obrigado\n");
	}
}
