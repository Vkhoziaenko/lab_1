#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

void main(void) {
	int M,N,i,j,zero,x;
	printf("Vvedite razmernost' matrici \n");
	scanf("%d%d",&M,&N);
	
	float A[M][N];
	printf("Vvedite elementi matrici \n");
	for(i=0;i<M;i++)
	for(j=0;j<N;j++)
		{
			printf("A[%d][%d]=",i,j);
			scanf("%f",&A[i][j]);
		  }
	 printf("\n");
	// �������� �������
	printf("Ishodnaya matrica \n");
	for (i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			printf("%-6.1f",A[i][j]);
			printf("\n");
		  }
	printf("\n");
	// ����� ������ ������ x, ��� ��������� ������� ����� 0
	zero=0; i=0; x=0;
	while(zero==0 && i<M)
		{
			zero=1; //���� � ����������� ������ ��� �������� ����� 0
			
			for(j=0;j<N;j++)
			if (A[i][j]!=0)
			zero=0; //���� � ����������� ������ �� ��� ��������� ����� 0
			
			if(zero==1)
			x=i;
			i++;
		  }
	// �������������� �������
	if (x<N)
		{
			for(i=0;i<M;i++)
			A[i][x]=A[i][x]/2;
	// ����� ���������� �������
			printf("Poluchennaya matrica \n");
			for(i=0;i<M;i++)
		  {
		  	for(j=0;j<N;j++)
		  	printf("%-6.1f",A[i][j]);
		  	printf("\n");
		  }
	    }
	    	else printf("Preobrazovanie ne vipolneno(stolbci s nomerom %d ne suwestvuut) \n",x+1);
}
