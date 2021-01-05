#include<stdio.h>
#define N 100
int main()
{
	int w,n,a[N],b[N],r[N];
	int i,j,m,k,t;
	scanf("%d%d",&w,&n);
	for(i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	if(w == (w/2)*2)
	    printf("ERROR");
	else{
	    for(i = w/2;i < n-w/2;i++){
	    	for(m = 0;m < n;m++){
	    	    b[m] = a[m];
		    }
	    	for(j = i-w/2;j < i+w/2;j++){
	    		for(k = j+1;k <= i+w/2;k++){
	    			if(b[k] > b[j]){
	    				t = b[k];b[k] = b[j];b[j] = t;
					}
				}
			}
			r[i] = b[i];
	    }
	    for(i = w/2;i < n-w/2;i++){
	    	a[i] = r[i];
		}
		for(i = 0;i < n;i++){
			printf("%d ",a[i]);
		}
    }
    return 0;
}
