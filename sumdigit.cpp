#include<bits/stdc++.h>
using namespace std;

int sumofdigit(int n)
{	
	int sum=0;
	while(n!=0)
	{
		sum+=(n%10);
		n=n/10;
	}
	return sum;
}


int main()
{
	int n,sum;
	cin>>n;
	sum=n;
	if(n<0)
		sum*=(-1);
	while(sum>10)
	{
		sum=sumofdigit(sum);
	}
	if(n<0)
		sum*=(-1);
	cout<<sum<<endl;


	return 0;
}
