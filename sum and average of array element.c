//WAP to find the sum and average of array element
#include<stdio.h>
int main()
{
	int a[5],i,sum=0,average;
	printf("enter the array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("sum=%d\n",sum);
	average=sum/5;
	printf("average=%d",average);
	return 0;
}
