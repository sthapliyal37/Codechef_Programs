#include<bits/stdc++.h>
using namespace std;
long long fuel_tank(long long cost,long long r ,long long arr[],long long i,long long m,long long n)
{
	if(n-i==r)
		return cost;
	if(i==n-1)
		return cost;
	if(r==0 && arr[i]==0)
		return -1;
	if(arr[i]==0)
		return fuel_tank(cost,r-1,arr,i+1,m,n);
	if(r==0)
		return fuel_tank(cost+arr[i],m-1,arr,i+1,m,n);
	long long x=fuel_tank(cost+arr[i],m-1,arr,i+1,m,n);
	long long y=fuel_tank(cost,r-1,arr,i+1,m,n);
	if(x<0 && y<0)
		return -1;
	if(x>0 && y>0)
		return min(x,y);
	if(x<1)
		return y;
	return x;
}


int main()
{
	ifstream in;
	ofstream out;
	in.open("running_on_fumes_chapter_1_validation_input.txt");
	out.open("output_fuel_tank.txt",ios_base::out);
	long long int tt;
	in>>tt;
	for(long long qq=0;qq<tt;qq++)
	{
		long long n,m;
		in>>n>>m;
		long long arr[n];
		for(long long i=0;i<n;i++)
			in>>arr[i];
		out<<"Case #"<<qq+1<<": "<<fuel_tank(0,m,arr,0,m,n)<<endl;
	}

	return 0;	
}
