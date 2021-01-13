#include<bits/stdc++.h>
using namespace std;
long long fuel_tank(long long cost,long long r ,long long arr[],long long i,long long m,long long n)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
			count+=1
		
	}
	
	
}
int main()
{
	ifstream in;
	ofstream out;
	in.open("running_on_fumes_chapter_1_validation_input (copy).txt");
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
