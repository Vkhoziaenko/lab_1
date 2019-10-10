#include <stdio.h>
#include <stdlib.h>
#include <math.h>	      // подключаем математические функции	
#include <locale.h>		  // подключаем библиотеку локализации (для русского языка в консоли)
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int argc, char const *argv[])


{
	setlocale(LC_ALL,"Russian");   // устанавливаем русскую локаль в программе
    int x, res;                    
    scanf("%d",&x);
    res=128*x*x;                   //рассчитываем результат
    printf ("res = %d\n",res);    //вывод результата на экран
    return 0;
}
