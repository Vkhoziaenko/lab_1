#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main(void)
{
    double N, COV = 0, *B, *X, *d, **EQU, EPS = 0.001;
    int i, j, n, ch = 0;
    
    puts("ENTER EQUATIONS NUMBER:");
    	scanf("%d", &n);
    	
    B = (double*)malloc(n*sizeof(double));
    X = (double*)malloc(n*sizeof(double));
    d = (double*)malloc(n*sizeof(double));
    EQU = (double**)malloc(n*sizeof(double*));
    
    for (i = 0; i < n; ++i)
    {
        B[i] = 0;
        X[i] = 0; 
        d[i] = 0;

        EQU[i] = (double*)malloc(n*sizeof(double));

        for (j = 0; j < n; ++j)
        {
            EQU[i][j] = 0;
        }
    }
    puts("ENTER COEFFICIENTS:");
    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("X[%d]=", j + 1);
            scanf("%lf", &EQU[i][j]);
        }
        printf("\r\n");
    }
    printf("ENTER FREE COEFFICIENTS:\r\n");
    for (i = 0; i < n; ++i)
    {
        printf("B[%d]=", i + 1);
        scanf("%lf", &B[i]);
    }
    do
    {	
    	ch++;
        for (i = 0; i < n; ++i)
        {
            d[i] = X[i];
            X[i] = B[i];
            for (j = 0; j < n; ++j)
            {
                if (i != j)
                {
                    X[i] -= EQU[i][j] * X[j];
                }
            }
            X[i] = X[i] / EQU[i][i];
            d[i] = fabs(d[i] - X[i]);
        }
        N = d[0];
        for (i = 1; i < n; ++i)
        {
            if (d[i] > N) N = d[i];
        }
        if (COV == 0)
        {
            COV = N;
            continue;
        }
        else
        {
            if (COV - N < 0)
            {
                break;
            }
            else
            {
                COV = N;
            }
        }
    } 
    while (N > EPS);
 	
    printf("ITERATIONS NUMBER IS %d\r\n", ch);

    for (i = 0; i < n; ++i)
    {
        printf("X[%d]=%lf \r\n", i + 1, X[i]);
    }
    system("pause");
}
 


