#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

void main(void) {
	setlocale(LC_ALL, "Russian");
	int n, m, i, j, p, zero, k, **pA, *pB, sum, max;
	
	printf("������� ����������� �������: ");
	scanf("%d", &n);
	m = n;
	pA=(int**)malloc(n*sizeof(int*));
	if (pA==NULL)
	{
		printf("������ ��������� ������!");
		return;
	}
	
	for (i=0; i<n; i++)
	{
		pA[i] = (int*)malloc(m*sizeof(int));
		if (pA[i]==NULL)
		{
			printf("������ ��������� ������!");
			return;
			}	
	}
		
	printf("������� ���������� �������:\n");
	for(i=0; i<n; i++)
	for(j=0; j<m; j++)
		{
			printf("A[%d][%d]=", i, j);
			scanf("%d", &pA[i][j]);
		}
		
	printf("�������� �������: \n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		printf("%4d", pA[i][j]);
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
	zero = 1;
	for(j=0; j<m; j++)
	if (pA[i][j]<0)
	zero = 0;
	if (zero==1)
		{
			p = 1;
			for(j=0; j<m;  j++)
			p = p*pA[i][j];
			printf("������������ ��������� ������ %d ����� %d \n", i, p);
			}	
	}
	k = 2*(n-2);
	pB = (int*)malloc(k*sizeof(int));
		if (pB==NULL)
	{
			printf("������ ��������� ������!");
			return;
			}	

	for (j=1; j<=(n-2); j++)
	{
		sum=0;
		for (i=0; i<(n-j); i++)
		sum = sum+pA[i][i+j];
		
		pB[j-1] = sum;
	}
	for(j=1; j<=(n-2); j++)
	{
		sum=0;
		for(i=0; i<(n-j); i++)
		sum = sum+pA[i+j][i];
		pB[j-1+k/2] = sum;
	}

	max=pB[0];
	for(i=0;i<k;i++)
	if (pB[i]>max)
	max = pB[i];
	printf("�������� ����� ���� ��������� ���������� �����: %d \n", max);
	free(pB);
	for(i=0; i<n; i++)
	free(pA[i]);
	free(pA);
}
