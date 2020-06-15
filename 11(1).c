#include <stdio.h>
#include <math.h>
#include <process.h>
int N, S, COV, fl = 0, i = 0, j = 0, k = 0;
float EQU[100][100], B[100], X[100], Xn[100], l, EPS = 0.001;

void RMat()
{
   	for(i = 0; i < N; i++)
	{
       	for(j = 0; j < N; j++)
	   	{	
	   		printf("X%d: ", j + 1);
       		scanf("%f", &EQU[i][j]);
       	}
       	printf("B%d: ", i + 1);
       	scanf("%f", &B[i]);
   	}
}

void CCon()
{
 	for(i = 0; i < N; i++)
	{
 	 	l = 0;
 	 	for(j = 0; j < N; j++)
		{
 	 		l = l + fabs(EQU[i][j]);
		}
		if(fabs(EQU[i][i]) < l - fabs(EQU[i][i]))
		{
		  	printf("***ERROR***");
		   	fl = 1;
		   	break;
		}
	}
 }
 
 
void Matrix()
{
   int i = 0, j = 0;
   printf("\r\n");
   	for(i = 0; i < N; i++)
   	{
       	for(j = 0; j < N; j++)
	   	{
       		printf("%f*X(%d)",EQU[i][j], j + 1);
       	}
       	printf("=%f\r\n ", B[i]);
   	}
}

int main()
{
   	printf("ENTER THE NUMBER OF EQUATIONS: ");
   	scanf("%d", &N);
   	printf("COEFFICIENTS:\n");
   	RMat();
   	Matrix();
    CCon();
    
    if(fl == 0)
	{
   		for(i = 0; i < N; i++)
		{
   			B[i] = B[i] / EQU[i][i];
   	   			for(j = 0; j < N; j++)
				{
   	   				if(i < j || i > j)	EQU[i][j] = EQU[i][j] / EQU[i][i];
   	   			}
   	  		  		Xn[i] = B[i];
   		}
   		COV = 0;
   		
   		Matrix();
   		
    	for(i = 0; i < N; i++)
		{
    		EQU[i][i] = 0;
		}
		
   		Matrix();
   		
  		do
		{
  		S = 0;
    	for(i = 0; i < N; i++)
		{
   			Xn[i] = B[i];	
	 		for(k = 0; k < N; k++)
			{
    	 		Xn[i] = Xn[i] - EQU[i][k] * X[k];
 	 		}
		}
			if(COV > 0)
			{
     	  		for(i = 0; i < N; i++)
				{
      	  			if(fabs(Xn[i] - X[i]) < EPS)
						{
      	  					S = S + 1;
      	  				}
				}
			}
			
			COV++;
			for(i = 0; i < N; i++)
			{
   	    		X[i] = Xn[i];
			}
   		}	while(S < N && COV < 255);

  		for(i = 0; i < N; i++)
		{
       		X[i] = Xn[i];
		}    
    	printf("\r\n");
		printf("Result %d\n", COV);
   		for(i = 0; i < N; i++)
		{
       		printf("X(%d) = %f\r\n", i + 1, X[i]);
		}
   	}
   	return 0;
}
