#include<bits/stdc++.h>
using namespace std;
vector<long long int> v(20);
void sequence()
{
	memset(v,0,sizeof(v));
	for(long long int i=2;i<10000;i=i+2)
	{
		long long temp=i,count=0;
		while(temp%2!=1)
		{
			count++;
			temp=temp/2;
		}
		v[count]++;
		count++;		
		for(int i=0;count<20;i++)
		{
			v[count]++;
		}		
		//cout<<i<<" "<<count<<endl;
	}
}
int main()
{
	sequence();
	int tt;
	cin>>tt;
	while(tt--)
	{
		long long int n;
		cin>>n;
		if(n%2!=0)
			cout<<n/2<<endl;
		else
		{
			long long temp=i,counti=0;
			while(temp%2!=1)
			{
				counti++;
				temp=temp/2;
			}
		
			long long count=0;
			
			for(long long int i=0;i<n/2;i++)
			{
					if(v[(n/2)-1]<v[i])
						count++;	
			}
			cout<<count<<endl;
		}		
	}
return 0;
}
