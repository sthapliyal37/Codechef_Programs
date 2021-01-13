#include<bits/stdc++.h> 
using namespace std; 
void count_k(vector<long long>& arr, long long& c_0, long long& c_1, long long& c_2) 
{ 
	for (long long i = 0; i < arr.size(); i++)
	{ 

		if (arr[i] % 3 == 0)
		{ 
			c_0++; 
		} 
		else if (arr[i] % 3 == 1)
		{ 
			c_1++; 
		} 
		else
		{ 
			c_2++;  
		} 
	} 
	return; 
} 
string solve(long long n, vector<long long>& arr) 
{ 
	long long c_0 = 0, c_1 = 0, c_2 = 0; 
	count_k(arr, c_0, c_1, c_2); 
	//cout<<c_0<<" "<<c_1<<" "<<c_2<<endl;
	if(c_0==0 && c_1!=0 && c_2!=0)
		return "No";
	if(c_0>c_1+c_2+1)
		return "No";
	return "Yes";
} 
int main() 
{ 
	long long tt;
	cin>>tt;
	while(tt--)
	{
		long long n;
		cin>>n; 
		vector<long long> arr;
		for(long long i=0;i<n;i++)
		{
			long long a;
			cin>>a;
			arr.push_back(a);
		} 
		cout<<solve(n, arr)<<endl; 
	}
	return 0; 
} 

