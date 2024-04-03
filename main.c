#include "eq.h"
#include<stdio.h>

int main(void) {
	/* SEGUNDO EXERCICIO CONVERSAO DE HORA
	* int total_seg, hora, min, seg;
	printf("Entre com os numero total de segundos: ");
	scanf_s("%d", &total_seg);
	convertahora(total_seg, &hora, &min, &seg);
	printf("O resultado e %d : %d : %d", hora, min, seg);
	*/
	/*Exercio 3
	* float a, b, c;
	printf("Entre com tres numeros inteiros: ");
	scanf_s("%f %f %f", &a, &b, &c);
	ordem(&a, &b, &c);
	printf(" Os numeros em ordem sao assim %f %f %f", a, b, c);
	*/

	int num1, num2, max, soma;
	printf("Informe um numero inteiro\n");
	le_dados(&num1);
	printf("Informe outro numero inteiro\n");
	le_dados(&num2);
	maior(num1, num2, &max); // a r m a z e n a em M a x o m a i o r v a l o r e n t r e os f o r n e c i d o s
	printf("O maior numero eh %d\n ", max);
	printf("A media dos numeros eh %.1f\n ", calculos(num1, num2, &soma)); // o b s
	printf("A soma dos numeros eh %d \n", soma);
	


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/* EXERCICIO RAZÃO ENTRE DOIS NUMEROS PONTEIRO
	* float x, y, r;
	printf("Entre com os numeros x e y: ");
	scanf_s("%f %f", &x, &y);
	int n = razao(x,y,&r);
	if (n == 0) {
		printf("Nao foi possivel realizar a divisao , divisao por zero");
		return 0;
	}
	else {
		printf("A razão entre os numeros e:  %f ", r);
		return 0;
	}
	*/

	
	
	
	
	
	
	
	
	/*printf("Entre com os coeficientes a b c: ");  exercicio da aula aula anterior
	scanf_s("%f %f %f", &a, &b, &c);
	float r1,  r2;
	int n = eq_raizes(a, b, c, &r1, &r2);
	if (n == 0) {
		printf("Não tem raizes reais");
	}
	else if (n == 1) {
		printf("1 raiz: %f \n", r1);
	}
	else {
		printf("2 raizes: %f %f\n", r1, r2);
	}
	*/
	return 0;
	
}