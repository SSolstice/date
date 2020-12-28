#include<stdio.h>
#define N 100 
int main()
{
	int i,n;
	int a,j,b[N],k;
	scanf("%d",&n);
	for(i = 0,k = 0;i < n;i++){
		scanf("%d",&a);
		for(j = 2;j <= a;j++){
			if(a % j == 0){
				a = a / j;
				b[k] = j;
				j = 2;
				k++;
			}
		}
		for(j = 0;j < k;j++){
			printf("%d",b[j]);
			if(j != k-1)
			printf("*");
			b[j] = 0;
		}
		printf("\n");
		k = 0;
	}
	return 0;
}
