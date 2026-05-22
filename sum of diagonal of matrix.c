//WAP to display the sum of diagonal of matrix
#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("enter the matrix\n");
	for(i=0;i<3;i++)
	{
	 for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
	printf("the sum of diagonal of matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
		
	}
	printf("sum=%d",sum);
	return 0;
}

