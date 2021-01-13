#include<bits/stdc++.h>
using namespace std;
int main()
{
	string str;
	int n;
	cin>>str;
	cin>>n;
	int sum=0,count=0;
	for(int i =0;i<n;i++)
	{
		int a=(str[i]-'0');
		sum+=(a*2);
	}	
	if(sum==0)
	{
		str[n-1]='1';
		sum+=2;
		count+=1;
	}
	for(int i=n-1;i<str.length()-n+1;i++)
	{
		int a=(str[i-n+1]-'0');
		sum=sum-(a*2);
		a=(str[i+n-1]-'0');
		sum=sum+(a*2);
		if(sum==0)
		{
			str[i+n-1]='1';
			sum+=2;
			count+=1;		
		}	
	}
	cout<<count;

	return 0;
}
