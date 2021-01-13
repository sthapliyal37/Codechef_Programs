#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tt;
    cin>>tt;
    long long int s=0;
    while(s<tt)
    {
        s+=1;
        long long int n,k;
        cin>>n>>k;
        long long int arr[n];
        for(long long int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int temp=k,index=-2;
        long long int count=0;
        for(long long int i=0;i<n;i++)
        {
            if(arr[i]==temp && (index+1==i || index==-2))
            {
                temp--;
                index=i;
            }
            else if(index!=-2 && arr[i]!=temp)
            {
                temp=k;
                index=-2;
                i--;
            }
            if(temp==0)
            {
                temp=k;
                count+=1;
                index=-2;
            }
        }
        cout<<"Case #"<<s<<": "<<count<<endl;
    }
    return 0;
}
