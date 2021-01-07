#include<stdio.h>
#define N 100
int main()
{
	int a[N];
	char ch[N];
	int i,j,m,t,n;
	int s,k;
	
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		for(j = 0;ch[j-1] != '\n';j++){
			scanf("%d%c",&a[j],&ch[j]);
		}
		k = j-1;
		for(j = 0;j < k;j++){
			for(m = j+1;m <= k;m++){
				if(a[j] > a[m]){
					t = a[j];a[j] = a[m];a[m] = t;
				}
			}
		}
		for(j = 1,m = 1;j <= k;j++){
			if(a[j] != a[j-1]){
				if(m == 1)
			    	s = a[j];
				m++;
			}
		}
		if(m <=2)
		    printf("ERROR\n");
		else
		    printf("%d\n",s);
	}
	return 0;
}
