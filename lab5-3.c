#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	setlocale(LC_ALL, "Russian");
	int n, m, i, j, zero, x;
	printf("������� ���������� �����: ");
	scanf("%d", &n);
	printf("������� ���������� ��������: ");
	scanf("%d", &m);
	
	float a[n][m];
	printf("������� �������� �������: \n");
	for(i=0; i<n; i++)
	for(j=0; j<m; j++) {
			printf("a[%d][%d]=", i, j);
			scanf("%f", &a[i][j]);
		}
	printf("\n");
	printf("�������� �������: \n");
	for (i=0; i<n; i++) {
			for(j=0; j<m; j++)
			printf("%6.1f", a[i][j]);
			printf("\n");
		}
	printf("\n");
	zero=0; i=0; x=0;
	while(zero==0 && i<n) {
			zero=1;
			
			for(j=0; j<m; j++)
			if (a[i][j]!=0)
			zero=0;
			
			if(zero==1)
			x=i;
			i++;
		}
	if (x<m) {
			for(i=0; i<n; i++)
			a[i][x] = a[i][x]/2;
			printf("���������� �������: \n");
			for(i=0; i<n; i++) {
		  	for(j=0; j<m; j++)
		  	printf("%6.1f", a[i][j]);
		  	printf("\n");
		}
	}
	    	else printf("�������������� �� ��������� (������� � ������� %d ne ����������) \n", x+1);
}
