#include <stdio.h>
#include <stdlib.h>
#include <math.h>	      // connect math functions	
#include <locale.h>		  // connect the localization library (for the Russian language in the console)
 

int main (int argc, char const *argv[])


{
	setlocale(LC_ALL,"Russian");    // set the Russian locale in the program
    int x, res;                    
    scanf("%d",&x);                // keyboard variable input
    res=128*x*x;                   // calculate the result
    printf ("res = %d\n",res);    // display result
    return 0;
}
#include<stdio.h>
float a[5][5];
int i, j;
 int main (void)
 {
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=4; j++)
        {
            printf("Vvedite element [%d, %d]",i,j);
            scanf("%f", &a[i][j]);
        }
    }
    
    for(i=1; i<=3; i++)
    {
        a[1][i]/=0.66;
    }
    
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=4; j++)
        {
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }
    
return 0;
 }
