#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale( LC_ALL, "Russian");
	float a, b, c;
	printf("enter the parties");
	scanf("%f%f%f",&a,&b,&c);
	(a==b && b==c && c==a)? printf("Equilateral triangle"):printf("The triangle is non-equilateral");
	return 0;
	
}
