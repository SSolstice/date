#include<stdio.h>
#define N 100
int main ()
{
	int a[N];
	int i,j,t;
	int const r[N] = {0,1,2,3,4,5,6,7,8,9};
	for(i = 0;i < 10;i++){
		scanf("%d",&a[i]);
	}
	if(a[0] == 0){
        for(i = 0;i < 10;i++){
		    for(j = 0;j < a[i];j++){
			    printf("%d",r[i]);
		    }
        }
    }
    else {
	    printf("10");
	    for(i = 0;i < 10;i++){
	    	if(i == 0 || i == 1){
	    		for(j = 0;j < a[i] - 1;j++){
	    			printf("%d",r[i]);
				}
			}
		    else{
			    for(j = 0;j < a[i];j++){
			        printf("%d",r[i]);
		        }
		    }
        }
    }
    return 0;
}
