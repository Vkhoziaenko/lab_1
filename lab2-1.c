#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
int main(){
	setlocale( LC_ALL, "Russian");
	float a, b, c;
	printf("������� �������");
	scanf("%f%f%f",&a,&b,&c);
	(a==b && b==c && c==a)? printf("����������� ��������������"):printf("����������� ����������������");
	return 0;
	
}
