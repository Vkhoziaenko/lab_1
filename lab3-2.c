#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {  
    int a; 
    float x; 
    printf("a? "); 
    scanf("%d", &a); 
    x = (double)a * a + 1; 
    while (x <= 1000000) x = x * x + 1; 
    printf("x: %.0f\n", x); 
    return 0; 
}
