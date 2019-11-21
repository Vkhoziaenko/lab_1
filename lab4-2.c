#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	const int n = 100;
	int arr[n];
	int i, k, sum1 = 0, sum2 = 0;
	printf("Array: ");
	for(i = 0; i < n; ++i){
		arr[i] = rand() % n;
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Enter k: ");
	scanf("%d", &k);
	if(k > n){
		printf("Sum K is more than sum of array elements. Try again!\n");
		exit(1);
	}
	for(i = 0; i < k; ++i)
	sum1 += arr[i];
	for(i = k + 1; i < n; ++i)
	sum2 += arr[i];
	printf("sum1: %d\nsum2: %d\n", sum1, sum2);
	if(sum1 > sum2){
		printf("sum1 > sum2");
	}
	else
	printf("sum1 < sum2");
	return 0;
}
