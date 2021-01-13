#include<bits/stdc++.h>
using namespace std;

int find(char *str)
{
	int arr[26];
	memset(arr,0,sizeof(arr));
	int count=0;
	while((*str)!='\0')
	{
		arr[*(str)-'a']+=1;
		*str++;
	}
	for(int i=0;i<26;i++)
	{
		
		if(arr[i]%2!=0)
			count+=1;
	}
	if(count>1)
		return 0;
	return 1;
}

int main()
{
	char *str;
	str=(char*)malloc(100*(sizeof(char)));
	cin>>str;
	cout<<find(str)<<endl;
	return 0;
}
