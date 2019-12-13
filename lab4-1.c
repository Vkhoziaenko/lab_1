  
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int i_max(int *a, const int N){ 
	int max; 
	int i;
	for(i = 0; i < N; ++i)
	if(a[i] > max)
	max = a[i];
	return max;
}
	
int i_min(int *a, const int N){ 
	int min; 
	int i;
	for(i = 0; i < N; ++i)
	if(a[i] < min)
	min = a[i];
	return min;
}

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	const int N = 10;
	int a[N];
	int i;
	int max;
	int min;
	
	printf("�������� ������: ");
	for(i = 0; i < N; ++i) {
		a[i] = rand() %N;
		printf("%d ", a[i]);
	}
	printf("\n");
	
	for (i = 0; i<N; ++i){
    if (a[i] > max) { 
		max = a[i]; 
}
    if (a[i] < min) { 
		min = a[i]; 
}
	}
	
	for(i = 0; i < N; ++i){
		if(a[i] == i_max(a, N)) 
		a[i] = 0;
		if(a[i] == i_min(a, N)) 
		a[i] = 0;
	}

	printf("���������������� ������: ");
	for(i = 0; i < N; ++i){
	printf("%d ", a[i]);
	}
}
