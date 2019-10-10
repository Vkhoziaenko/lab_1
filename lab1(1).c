#include <stdio.h>
#include <stdlib.h>
#include <math.h>	      // подключаем математические функции	
#include <locale.h>		  // подключаем библиотеку локализации (для русского языка в консоли)
 

int main (int argc, char const *argv[])


{
	setlocale(LC_ALL,"Russian");    // устанавливаем русскую локаль в программе
    int x, res;                    
    scanf("%d",&x);                // ввод переменной с клавиатуры
    res=128*x*x;                   // рассчитываем результат
    printf ("res = %d\n",res);    // вывод результата на экран
    return 0;
}
