#include <stdio.h>
#include <stdlib.h>
#include <math.h>	      // ���������� �������������� �������	
#include <locale.h>		  // ���������� ���������� ����������� (��� �������� ����� � �������)
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main (int argc, char const *argv[])


{
	setlocale(LC_ALL,"Russian");   // ������������� ������� ������ � ���������
    int x, res;                    
    scanf("%d",&x);
    res=128*x*x;                   //������������ ���������
    printf ("res = %d\n",res);    //����� ���������� �� �����
    return 0;
}
