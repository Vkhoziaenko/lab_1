#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Russian");
	float a, b , c;
	printf("¬ведите число a:");
	scanf("%f",&a);
	printf("¬ведите число b:");
	scanf("%f",&b);
	printf("¬ведите число c:");
	scanf("%f",&c); 
    if (b - a == c - b) printf("явл€етс€ арифметической прогрессией");
	else printf("Ќе €вл€етс€ арифметической прогрессией");
	return 0;	
}

