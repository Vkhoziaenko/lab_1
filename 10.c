#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 20
void main(void)
{
  double matrix[N][N + 1];
  double x[N]; 
  int otv[N]; 
  int i, j, k, n;

  do
  {
    printf("Enter the number of equations: ");
        scanf("%d", &n);
    if (N < n)
    {
        printf( "***THE QUANTITY OF EQUATIONS IS TOO LARGE***\n" );
    }
  }    while (N < n);

    printf("Enter coefficients:\n");
        for (i = 0; i < n; i++)
        {   
            printf("String %d: \n",i + 1);

            for(j = 0; j < n + 1; j++)
            {   
                printf("x%d: ",j + 1);
                    scanf("%lf", &matrix[i][j]);
            }
        }

    printf("Your equations's system:\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n + 1; j++)
            {
                printf("%7.2f", matrix[i][j]);    
            }
            printf("\n");
        }
            for (i = 0; i < n + 1; i++)
            {
                otv[i] = i;
            }
        
//----------------------------------------------STRAIGHT RUN-------------------------------------
  for (k = 0; k < n; k++)
  { 
    mel(k, matrix, n, otv);
    if (fabs(matrix[k][k] ) < 0.0001)
    {
      printf("***EQUATIONS'S SYSTEM HAS NOT ONLY ONE DECICION***");
        return;
    }

    for(j = n; j >= k; j--)
    {
      matrix[k][j] /= matrix[k][k];
    }

    for(i = k + 1; i < n; i++)
    {
        for(j = n; j >= k; j--)
        {
        matrix[i][j] -= matrix[k][j] * matrix[i][k];
        }
    }
  }
//----------------------------------------------RETURN STROKE-------------------------------------
    for(i = 0; i < n; i++)
    {
    x[i] = matrix[i][n];
    }
    for (i = n - 2; i >= 0; i--)
    {
        for (j = i + 1; j < n; j++)
        {
            x[i] -= x[j] * matrix[i][j];
        }
    }
    printf("Answer:\n");
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(i == otv[j])
                {
                    printf("%f\n", x[j]);
                        break;
                }
            }
        }
    return;
}

void mel(int k, double matrix[][N + 1], int n, int otv[])
{
    int i, j, i_max = k, j_max = k;
    double temp;
        for(i = k; i < n; i++)
        {
            for(j = k; j < n; j++)
            {
    if (fabs(matrix[i_max][j_max] ) < fabs(matrix[i] [j]))
    {
        i_max = i;
        j_max = j;
    }
            }
        }

    for( j = k; j < n + 1; j++ )
    {
        temp = matrix[k] [j];
        matrix[k] [j] = matrix[i_max] [j];
        matrix[i_max] [j] = temp;
    }
    for(i = 0; i < n; i++)
    {
        temp = matrix[i] [k];
        matrix[i] [k] = matrix[i] [j_max];
        matrix[i] [j_max] = temp;
    }
    i = otv[k];
    otv[k] = otv[j_max];
    otv[j_max] = i;
}
