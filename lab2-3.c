#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Russian");
	float a, b;
	switch (argc){
	
	case 1:
	printf("������� ����� a:");
	scanf("%f",&a);
	printf("������� ����� b:");
	scanf("%f",&b);
	printf("����� ����� %f ", a+b);
	case 2: 
	printf("������� ����� a:");
	scanf("%f",&a);
	printf("������� ����� b:");
	scanf("%f",&b);
	printf("�������� ����� %f ", a-b);
	return 0;
}
}
