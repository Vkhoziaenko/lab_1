#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	void main() {
	setlocale(LC_ALL, "Russian");
	int i, j, n, m;
	int matrix[n][m];
	printf("¬ведите количество строк: ");
	scanf("%d", &n);
	printf("¬ведите количество столбцов: ");
	scanf("%d", &m);
	for (i=0; i<n; i++) {
		for (j=0; j<m; j++) {
			printf("¬ведите число matrix[%d][%d] ", i, j);
			scanf("%d", &matrix[i][j]);
		}
	}
	printf("\n");
	
	int number, k;
	int num[5];
	for (i=0, k=0; i<n, k<n; i++, k++) {
		number = 0;
		for (j=0; j<m; j++) {
			if (matrix[i][j] == 0) {
				number++;
			}
		}
		num[k] = number;
	}
	for (k=0; k<n; k++) {
		printf("\n");
		printf("%d", num[k]);
	}	
	for (k=0; k<n; k++) {
		if (num[k] = 0) {
			for (i=0; i<n; i++) {
				for (j=0; j<m; j++) {
					if (matrix[i][j] < 0) {
						matrix[i][j] = 0;
					}				
				}
			}
		}	
	}
	for (i=0; i<n; i++) {
		printf("\n");
		for (j=0; j<m; j++) {
			printf("%d ", matrix[i][j]);
		}
	}
}
