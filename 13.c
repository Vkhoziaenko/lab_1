#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int i,j,n,k,ans,l;
int a[1000],z[1000];

int main() {
	
	
	scanf("%d",&n);
	k=1;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
		if(a[i]<0){
			z[k]=a[i];
			k++;
		}
	}
	for(i=1;i<=k;i++){
		for(j=i+1;j<=k;j++){
			if(z[j]<z[i]){
				l=z[i];
				z[i]=z[j];
				z[j]=l;
			}
		}
	}
	for(i=1;i<k;i++)printf("%d ",z[i]);
	k=1;
	ans=0;
	for(i=1;i<=n;i++){
		if(a[i]>0){
			z[k]=a[i];
			k++;
		}
		if(a[i]==0)ans++;
	}
	for(i=1;i<=k;i++){
		for(j=i+1;j<k;j++){
			if(z[j]>z[i]){
				l=z[i];
				z[i]=z[j];
				z[j]=l;
			}
		}
	}
	for(i=1;i<k;i++)printf("%d ",z[i]);
	for(i=1;i<=ans;i++)printf("0 ");
	printf("\n");
	return 0;
}
