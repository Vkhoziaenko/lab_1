#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Russian");
	float a, b , c;
	printf("insert the number a:");
	scanf("%f",&a);
	printf("insert the number b:");
	scanf("%f",&b);
	printf("insert the number c:");
	scanf("%f",&c); 
    if (b - a == c - b) printf("Is an arithmetic progression");
	else printf("not an arithmetic progression");
	return 0;	
}

