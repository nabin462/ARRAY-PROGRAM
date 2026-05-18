//WAP to dispaly smallest and largest array element
#include<stdio.h>
int main()
{
	int a[5],i,j,small,large;
	printf("enter the array element\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	large=a[0];
	for(i=0;i<5;i++)
	{
		if(small>a[i])
		{
			small=a[i];
		}
		if(large<a[0])
		{
			large=a[0];
		}
	}
	printf("smallest=%d\t largest=%d\n",small,large);
	return 0;
}
