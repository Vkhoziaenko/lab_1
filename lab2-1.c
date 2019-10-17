#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale( LC_ALL, "Russian");
	float a, b, c;
	printf("Введите стороны");
	scanf("%f%f%f",&a,&b,&c);
	(a==b && b==c && c==a)? printf("Треугольник равносторонний"):printf("Треугольник неравносторонний");
	return 0;
	
}
