#include<stdio.h>
int main()
{
int n;
for (n = 401; n < 500; n++)
if (n % 10 + n / 10 % 10 + n / 100 == 9 && (n % 10 * 100 + n / 10 % 10 * 10 + n / 100) / 36 * 47 == n)
printf("This number : %d\n", n);
}
