#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    map<char,int> m;
    bool flag=true;
    for(int i=0;i<n;i++)
    {    
        string str;
        cin>>str;
	if(m.find(str[0]!=m.end)
	{
		flag=false;
	}
	else
	{
		m[str[0]]+=1;
	}      
  }
    if(flag==true)
        cout<<"ALL IZZ WELL";
    else
        cout<<"OH SHIT";
    cout<<endl;
    return 0;
} 
