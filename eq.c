
#include"eq.h"
#include<math.h>
#include<stdio.h>
int eq_raizes(float a, float b, float c, float* p1, float* p2) {
	float d = b * b - 4 * a * c;
	if (d < 0.0f) {
		return 0;
	}
	else if (d == 0) {
		*p1 = -b / (2.0f * a);
		return 1;
	}
	else {
		float v = (float)sqrt(d);
		*p1 = (-b - v) / (2.0f * a);
		*p2 = (-b + v) / (2.0f * a);
		return 2;
	}
	
}
int razao(float x, float y, float* r) {
	if (y == 0.0f) {
		return 0;
	}
	else {
		*r = x / y;
		return 1;
	}
}
void convertahora(int total_seg, int* hora, int* min, int* seg) {
	*hora = total_seg / 3600;
	*min = (total_seg % 3600) / 60;
	*seg = (total_seg % 3600) % 60;
}

void ordem(float* a, float* b, float* c) {
	
	
	if (*b < *a){
		float x = *a;
		float y = *b;
		*a = y;
		*b = x;
		
	}
	if (*c < *b) {

		
		float y = *b;
		float z = *c;
		*b = z;
		*c = y;

	}
	if (*c < *a) {
		float x = *a;
		float z = *c;
		*a = z;
		*c = x;

	}
	
	
}
void le_dados(int* d) {
	scanf_s("%d", d);
}

void maior(int n1, int n2, int* m) {
	if (n1 > n2) {
		*m = n1;
	 }
	else {
		*m = n2;
	}
}

float calculos(int n1, int n2, int* s) {
	*s = n1 + n2;
	return (float)*s / 2;
}