#include<bits/stdc++.h>
using namespace std;
int main()
{
	long tt;
	cin>>tt;
	while(tt--)
	{
		string str,ptr,result;
		cin>>str>>ptr;
		for(long i=0;i<ptr.size();i++)
		{
			auto it=str.find(pattern[i]);
			str.erase(it);
		}
		sort(str.begin(),str.end());
		for(long long int  i=0;i<str.size();i++)
		{
			if(str[i]<=pattern[0])
			{
				result=str.substr(0,i) + pattern + str.substr(i,str.size()-i+1);
			}
		}
		cout<<result<<endl;
			
	}
	








	return 0;
}
