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
       for (long long i=0;i<n;i++)
            cin>>arr[i];
        long long max=1;
        
        for(long long i=0;i<n;i++)
        {
            long long count=0;
            if(arr[i+1]>=arr[i])
            {
                long long j=i;
                while(arr[j+1]>=arr[j] && j+1<n)
                {
                    count+=1;
                    j+=1;
                }
            }
            else if(arr[i+1]<=arr[i])
            {
                long long j=i;
                while(arr[j+1]<=arr[j] && j+1<n)
                {
                    count+=1;
                    j+=1;
                }
            }
            if(count>max)
                max=count;
        }
       
       cout<<max<<endl;
   }
    
    
    
    
    return 0;
}
