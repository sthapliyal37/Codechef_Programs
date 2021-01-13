#include<bits/stdc++.h>
using namespace std;
vector<long long int> v(100000001);
void compute()
{
    for(int i=0;i<10000;i++)
    {
        for(int j=i;j<10000;j++)
        {
            v[pow(j,2)-pow(i,2)]=1;
        }
    }
}
int main()
{
    compute();
    long long int tt;
    cin>>tt;
    while(tt--)
    {
        long long int l,r;
        cin>>l>>r;
        long long count=0;
        for(long long int i=l;i<r+1;i++)
            if(v[i]==1)
                count+=1;
        cout<<count<<endl;    
    }
    return 0;
}
