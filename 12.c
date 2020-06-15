#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

const int SIZE = 150;

struct hash
{
	int value; 
	int key;
	int next; 
};

int hashFunc(int k)
{
	return k%20;
}
struct hash t;
struct hash table[150];
int pls[150],k,min;
int mns[150];
int main()
{
	int pointers[150];
	int i,j;
	for(i=0; i<150; i++)
	{
		pointers[i]=-1;
	}
	for(i=0; i<150; i++)
	{
		table[i].value = -1;
		table[i].next = -1;
	}

	setlocale(LC_ALL, "rus");
		srand(time(NULL));
	printf("Ââåäèòå êîëè÷åñòâî çíà÷åíèé: ");
	int n;
	scanf("%i", &n);
	for(i=0; i<n; i++)
	{
		printf("i = %d, n = %d\n", i+1, n);
		int value = rand() % 50;
		if(rand() % 2 == 1)
			value = -1*value;

		int key = hashFunc(abs(value));
		table[i].value = value;
		table[i].key = key;
		if(pointers[key] != -1)
		{
			table[pointers[key]].next = i;
		}
		pointers[key] = i;
		printf("Äîáàâëåíî çíà÷åíèå %d ñ êëþ÷îì %d;\n", value, key);
	}
	int t1 = 0;
	int t2 = 0;
int d;
float sr;
sr=0;
d=0;
	for(i=0; i<n; i++)
	{
	sr=sr+table[i].key;
	}
	sr=sr/n;
	for(i=0; i<n; i++)
	{
			for(j=0; j<n; j++)
	{
		if(table[i].key<table[j].key){
			t=table[i];
			table[i]=table[j];
			table[j]=t;
		}
		
	}}
		for(i=0; i<n; i++)
	{
		printf("\nÊëþ÷ %d, Çíà÷åíèå %d ", table[i].key,table[i].value);}

}
