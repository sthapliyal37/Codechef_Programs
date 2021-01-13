#include<bits/stdc++.h>
using namespace std;
int SumUniqueElements(int *arr,int length)
{
	map<int,int> m;
	for(int i=0;i<length;i++)
	{
		if(m.find(arr[i])==m.end())
		{
			m[arr[i]]=0;
		}
		m[arr[i]]+=1;
	}
	map<int,int> ::iterator itr;
	int sum=0;
	for(itr=m.begin();itr!=m.end();itr++)
	{
		if(itr->second<2)
			sum+=itr->first;
	}
	return sum;
}	



int main()
{
	int length;
	cin>>length;
	int arr[length];
	for(int i=0;i<length;i++)
	{
		cin>>arr[i];
	}
	cout<<SumUniqueElements(arr,length);
	return 0;
}
