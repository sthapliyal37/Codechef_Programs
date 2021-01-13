#include<bits/stdc++.h>
#define x 2000021
using namespace std;
long long int v[x];		//array for storing smallest prime factor
void sieve()
{   
    v[1]=1;
    for(long long int i=2;i<x;i++)
        v[i]=i;
    for(long long int i=4;i<x;i+=2)
        v[i]=2;
    for(long long int i=3;i*i<x;i++)
    {
        if(v[i]==i)
        {
        	
            for(long long int j=i*i;j<x;j+=i)
            {
                if(v[j]==j)
                {
                    v[j]=i;
                }
            }
        }
    }        
}
//Function for returning  total number of prime factors 
long long int prime_factors(long long n)
{
     set<long long int> s;
     while(n!=1)
     {
         s.insert(v[n]);
         n=n/v[n];
     }
    return s.size();    
}
void distinctPrimes(long long int m, long long int k)
{
	vector<long long int> result;			//Stors result
	for(long long int i=14;i<m+k;i++)
        {
            long long count=prime_factors(i);		//counting number of prime factors of number
            if(count==k)
            {
             result.push_back(i);			//if number has exactly k factors push into the vector
            }
        }
        long long int p=result.size();
        for(long long int index=0;index<p-1;index++)
        {
            long long element=result[index];
            long long count=1,z=index;
              while(z<p-1 && count<=k && result[z]+1==result[z+1])
              {
                  count++;			//counting sequence until k
                  z++;
              }
              if(count>=k)
                cout<<element<<endl;			
        }
}

//Driver Function
int main()
{
    sieve();        
    long long int m=1000,k=3;
	distinctPrimes(m,k);	        
    
    return 0;
}

