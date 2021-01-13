#include<stdio.h>
#include<stdlib.h>
typedef struct sales{
	char item[10];
	int price;
}sales;
int main()
{
	int n,i,sum=0,max=-1;
	sales *arr;
	scanf("%d",&n);
	arr=(sales*)malloc(n*sizeof(sales));
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&arr[i].item,&arr[i].price);
		sum+=arr[i].price;
		if(max==-1 || arr[max].price<arr[i].price)
		{
			max=i;
		}
	}
	printf("total=%d\naverage=%f\n",sum,sum/(float)n);
	printf("Maximum Sale::\nItem::%s\nPrice::%d",arr[max].item,arr[max].price); 
return 0;
}
