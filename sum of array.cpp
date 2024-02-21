#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,sum=0;
	a=(int *)malloc(5*sizeof(int));
	for(int i=0;i<5;i++)
	{
		scanf("%d",(a+i));
		sum=sum + *a+i;
	}
	printf("sum of aray elements  %d ",sum);
	return 0;
}