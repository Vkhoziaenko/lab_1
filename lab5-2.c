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
	// Исходная матрица
	printf("Ishodnaya matrica \n");
	for (i=0;i<M;i++)
		{
			for(j=0;j<N;j++)
			printf("%-6.1f",A[i][j]);
			printf("\n");
		  }
	printf("\n");
	// поиск первой строки x, все эелементы которой равны 0
	zero=0; i=0; x=0;
	while(zero==0 && i<M)
		{
			zero=1; //если в проверяемой строке все элементы равны 0
			
			for(j=0;j<N;j++)
			if (A[i][j]!=0)
			zero=0; //если в проверяемой строке не все элементый равны 0
			
			if(zero==1)
			x=i;
			i++;
		  }
	// преобразование матрицы
	if (x<N)
		{
			for(i=0;i<M;i++)
			A[i][x]=A[i][x]/2;
	// вывод полученной матрицы
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
