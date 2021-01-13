#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int tt;
    cin>>tt;
    while(tt--)
    {
        long long int n,m,x,y;
        cin>>n>>m>>x>>y;
        if((x*2)>=y)
            cout<<(n*y*m*0.5);
        else
            cout<<(n*x*2*m*0.5);
        cout<<endl;
    }
    return  0;
}
