#include<stdio.h>
#define N 100
#define FORTY 40
#define TEN 10
int main ()
{
	char const ch = '*';
	int i,j,t = 0,n = 0,a[N],max;
	float sum = 0,avg,mdn;
	int const grd[] = {1,2,3,4,5,6,7,8,9,10};
	
	printf("Please enter the counts: ");
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
		    mdn = (float)(grd[i]+grd[i+1])/2;
			break;
		}
		else if(n >= 21){
			mdn = grd[i];
			break;
		}
	} 
	printf("\nAverage: %.2f\tMedian: %.2f\tMode: ",avg,mdn);
	max = a[0];
	for(i = 1;i < TEN;i++){
		if(a[i] > max)
		max = a[i];
	}
	for(i = 0;i < TEN;i++){
		if(a[i] == max)
		printf("%d  ",grd[i]);
	}
	printf("\n"); 
	
	return 0;
}
