#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Russian");
	float a, b;
	switch (argc){
	
	case 1 :
	printf("insert the number a:");
	scanf("%f",&a);
	printf("insert the number b:");
	scanf("%f",&b);
	printf("the amount is %f ", a+b);
	case 2: 
	printf("insert the number a:");
	scanf("%f",&a);
	printf("insert the number b:");
	scanf("%f",&b);
	printf("the difference is %f ", a-b);
    case 3:
	printf("insert the number a:");
	scanf("%f",&a);
	printf("insert the number b:");
	scanf("%f",&b);
	printf("the the product of the numbers is %f ", a*b);
	case 4: 
	printf("insert the number a:");
	scanf("%f",&a);
	printf("insert the number b:");
	scanf("%f",&b);
	printf("the divide is %f ", a/b);
	return 0;
}
}