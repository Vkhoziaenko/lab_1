#include <stdio.h>
#include <stdlib.h>
#include <math.h>	// connect math functions	
#include <locale.h>	// connect the localization library (for the Russian language in the console)f


int main() 
{
	setlocale(LC_ALL,"Russian");  // set the Russian locale in the program		
	
	float x, y, z, a, b, c, s;	  // declare necessary variables	
	
	printf("enter variable x<0:");
	scanf("%f",&x);
	
	printf("enter variable y>0:");
	scanf("%f",&y);
	
	printf("enter variable z>0:");
	scanf("%f",&z);
	
	a = exp(fabs(x-y))*pow(fabs(x-y),x+y);
	
	b = atan(x)+atan(z);
	
	c = pow(pow(x,6)+pow(log(y),2),1/3.); 
	
	s = a/b+c;		// calculate the result
	
	printf("%f",s);	         //	display result
	
	return 0;
}
