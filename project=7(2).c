#include<stdio.h>

sum(int b[])
{
	int i,sum=0,ave,n;
	printf("enter value=");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=b[i];i++)
	{
		sum = sum + b[i];
	}
	printf("sum of all element = %d",sum);
}

main()
{
    int arry[100];
    sum(arry);
		
}
