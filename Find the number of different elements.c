#include<stdio.h>
#include<stdbool.h>
#define N 100
int main()
{
	int i,j,n;
	bool s[N] = {false};
	int a[N],k,l,m,r=0;
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d",&k);
		for(j = 0;j < k;j++){
			scanf("%d",&a[j]);
			m = j;
		}
		for(j = 0;j < k;j++){
			for(l = j + 1;l < k;l++){
				if(a[l] == a[j] && !s[j]){
					r++;s[j] = true;
				}
			}
		}
		printf("%d\n",m-r+1);
	}
}
