#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	int n;
	scanf("%d",&n);
	arr=(int*)malloc((n+2)*sizeof(int));
	int max,min;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(i==0)
		{
			max=arr[i];
			min=arr[i];
		}
		else
		{
			if(max<arr[i])
				max=arr[i];
			if(min>arr[i])
				min=arr[i];
		}
	}
	arr[n]=max;
	arr[n+1]=min;
	for(int i=0;i<n+2;i++)
	{
		printf("%d ",arr[i]);
	}

return 0;
}

