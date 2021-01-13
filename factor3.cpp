#include<bits/stdc++.h>
using namespace  std;
int main()
{
	long long tt;
	cin>>tt;
	while(tt--)
	{
		long long n,count=0;
		cin>>n;
		long long arr[n];
		for(long long i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]%3==0)
				count+=1;
		}
		if(count<=(n-count+1))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}


	return 0;
}
