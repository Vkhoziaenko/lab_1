#include <stdio.h>
#include <stdlib.h>
#include <math.h>	// подключаем математические функции	
#include <locale.h>	// подключаем библиотеку локализации (дл€ русского €зыка в консоли)

/* run this program using the console pauser or add your own getch, system("pause") or input loop */	

int main() 
{
	setlocale(LC_ALL,"Russian");  // устанавливаем русскую локаль в программе		
	
	float x, y, z, a, b, c, s;	  // декларируем необходимые переменные		
	
	printf("¬ведите переменную x<0:");
	scanf("%f",&x);
	
	printf("¬ведите переменную y>0:");
	scanf("%f",&y);
	
	printf("¬ведите переменную z>0:");
	scanf("%f",&z);
	
	a = exp(fabs(x-y))*pow(fabs(x-y),x+y);
	
	b = atan(x)+atan(z);
	
	c = pow(pow(x,6)+pow(log(y),2),1/3.); 
	
	s = a/b+c;		//рассчитываем результат
	
	printf("%f",s);	         //вывод результата на экран	
	
	return 0;
}
