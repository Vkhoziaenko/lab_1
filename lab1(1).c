#include <stdio.h>
#include <stdlib.h>
#include <math.h>	      // ���������� �������������� �������	
#include <locale.h>		  // ���������� ���������� ����������� (��� �������� ����� � �������)
 

int main (int argc, char const *argv[])


{
	setlocale(LC_ALL,"Russian");    // ������������� ������� ������ � ���������
    int x, res;                    
    scanf("%d",&x);                // ���� ���������� � ����������
    res=128*x*x;                   // ������������ ���������
    printf ("res = %d\n",res);    // ����� ���������� �� �����
    return 0;
}
