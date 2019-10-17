#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Russian");
	float a, b;
	switch (argc){
	
	case 1:
	printf("Введите число a:");
	scanf("%f",&a);
	printf("Введите число b:");
	scanf("%f",&b);
	printf("Сумма равна %f ", a+b);
	case 2: 
	printf("Введите число a:");
	scanf("%f",&a);
	printf("Введите число b:");
	scanf("%f",&b);
	printf("Разность равна %f ", a-b);
	return 0;
}
}
