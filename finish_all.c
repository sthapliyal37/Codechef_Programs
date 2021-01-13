#include<stdio.h>
#define size 100000
int main()
{
	int n,i,arr[size],j,temp=0,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	for(i=0;i<n;i++)
	{
	if(arr[i]!=-1)
	{
		temp=1;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[j]=-1;
				temp++;
			}
		}
		if(temp%2==0)
		{
			count+=(temp/2);
		} 
		else
		{
			count+=((temp+1)/2);
		}
	}	
	}
	printf("%d\n",count);
	return 0;
}
