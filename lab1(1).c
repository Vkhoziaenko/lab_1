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
