#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tt;
    cin>>tt;
    while(tt--)
    {
        long long n,k;
        cin>>n>>k;
        long long arr[n];
        for(long long i=0;i<n;i++)
            cin>>arr[i];
        long long weight=0;
        long long i=0;
        long long count=1;
        for(i=0;i<n;i++)
        {
            if(arr[i]>k)
                break;
            
            else if(arr[i]+weight<=k)
            {
                weight+=arr[i];
            }
            else
            {
                count+=1;
                weight=arr[i];
            }
        }
        if(i==n)
            cout<<count<<endl;
        else
            cout<<"-1"<<endl;
    }
}
