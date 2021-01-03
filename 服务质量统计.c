#include<stdio.h>
#define N 100
#define FORTY 40
#define TEN 10
int main ()
{
	char const ch = '*';
	int i,j,t = 0,n = 0,a[N];
	float sum = 0,avg,mdn,mode;
	int const grd[] = {1,2,3,4,5,6,7,8,9,10};
	
	for(i = 0;i < TEN;i++){
		scanf("%d",&a[i]);
	}
	printf("Grade\tCount\tHistogram\n");
	for(i = 0;i < TEN;i++)/*打印表格*/{
		printf("  %2d\t  %2d\t",grd[i],a[i]);
		for(j = 0;j < a[i];j++){
			putchar(ch);
		}
		printf("\n");
	} 
	for(i = 0;i < TEN;i++)/*求平均值*/{
		sum += a[i]*grd[i];
	}
	avg = sum / FORTY;
	for(i = 0;i < TEN;i++)/*求中位数*/{
		n += a[i];
		if(n == 20){
		    mdn = grd[i]*grd[i+1]/2;
			break;
		}
		else if(n >= 21){
			mdn = grd[i];
			break;
		}
	} 
	for(i = 0;i < TEN;i++){
		for(j = 0;j < TEN;j++){
			if(a[i] > a[j])
				t = i;
			else 
			    t = j;
		}
	}
	mode = grd[t];
	printf("\nAverage: %.2f\tMedian: %.2f\tMode: %.0f\n",avg,mdn,mode);
	
	return 0;
}
