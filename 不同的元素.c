#include<stdio.h>
#include<stdbool.h>
#define N 100
int main()
{
    bool b[N] = {false};
	int a[N];	  
	int i,j;
	int n,r = 0;
	
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0;i < n;i++){
		for(j = i+1;j < n;j++){
			if(a[j] == a[i] && !b[i]){
				r++;
				b[i] = true;
			}
		}
	}
	printf("%d",n-r);
	return 0;
}
