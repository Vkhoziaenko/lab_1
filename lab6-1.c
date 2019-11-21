#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	
void main() {
	setlocale(LC_ALL, "Russian");
	int n, i, sum, num, *pa;
	
	printf("Введите размер массива: ");
	scanf("%d", &n);
	
	pa=(int*)malloc(n*sizeof(int));
	if(pa==NULL) {
		printf("Недостаточно памяти!");
		getch();
		return;
	}
	printf("Введите элементы массива: ");
	for(i=0; i<n; i++)
	scanf("%d", pa+i);
	
	printf("Исходный массив: ");
	for(i=0; i<n; i++)
	printf("%d", *(pa+i));
	num = 0;
	for(i=0; i<n; i++) {
		if(*(pa+i)>0)
		num++;
	}
	printf("\nКоличество положительных элентов в массиве: %d", num);
	sum = 0;
	i = n-1;
	while(*(pa+i)!=0 && i>0) {
		sum = sum+*(pa+i);
		i--;
	}
	printf("\nСумма элементов массива, расположенных после последнего нуля: %d", sum);
	free(pa);
	getch();
}
