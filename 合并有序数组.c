#include<stdio.h>
#define N 100
int main ()
{
	int a[N],b[N],r[N];
	int m,n;
	int i,j,t; 
	scanf("%d%d",&m,&n);
	for(i = 0;i < m;i++){
		scanf("%d",&a[i]);
		r[i] = a[i];
	}
	for(i = 0;i < n;i++){
		scanf("%d",&b[i]);
		r[i+m] = b[i];
	}
	for(i = 0;i < m+n;i++){
		for(j = i;j < m+n;j++){
			if(r[i] > r[j]){
				t = r[i];r[i] = r[j];r[j] = t;
			}
		}
	}
	for(i = 0;i < m+n;i++){
		printf("%d ",r[i]);
	}
	return 0;
}
