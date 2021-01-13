#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tt;
    cin>>tt;
    while(tt--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(long long i=0;i<n;i++)
            cin>>arr[i];
        bool flag=true;
        for(long long i=0;i<n;i++)
        {
            if(arr[i]!=i+1)
            {
                if(__gcd(arr[i],i+1)!=arr[i])
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag==false) 
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
