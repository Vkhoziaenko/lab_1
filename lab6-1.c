#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
void main() {
	setlocale(LC_ALL, "Russian");
	int n, i, sum, num, *pa;
	
	printf("������� ������ �������: ");
	scanf("%d", &n);
	
	pa=(int*)malloc(n*sizeof(int));
	if(pa==NULL) {
		printf("������������ ������!");
		getch();
		return;
	}
	printf("������� �������� �������: ");
	for(i=0; i<n; i++)
	scanf("%d", pa+i);
	
	printf("�������� ������: ");
	for(i=0; i<n; i++)
	printf("%d", *(pa+i));
	num = 0;
	for(i=0; i<n; i++) {
		if(*(pa+i)>0)
		num++;
	}
	printf("\n���������� ������������� ������� � �������: %d", num);
	sum = 0;
	i = n-1;
	while(*(pa+i)!=0 && i>0) {
		sum = sum+*(pa+i);
		i--;
	}
	printf("\n����� ��������� �������, ������������� ����� ���������� ����: %d", sum);
	free(pa);
	getch();
}
