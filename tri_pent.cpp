#include<bits/stdc++.h>
using namespace std;

//Function to check numbers less than N which are triangle numbers as well as Pentagonal numbers
void tri_pent(long long n)
{
    set<long long int> s;		//Set for stroring result numbers
    long long tn=1;			
    for(long long int i=1;tn<n;i++)
    {
        tn=i*(i+1)/2;			//Calculation of triangle number from the series
        long double pn=(1+sqrt(24*tn+1))/6;		//function returns the index of inputed pentagonal number
        if(pn==long(pn) && tn<n)		//if return value is positive integer value then it is pentagonal number
            s.insert(tn);		
    }
    set<long long int> ::iterator itr;
    for(itr=s.begin();itr!=s.end();++itr)			
        cout<<*itr<<endl;	//print final set values
}

//Driver Function
int main()
{
    long long int n=100000;
        tri_pent(n);			//Function Call
        //This Code is Contributed By Siddhant Thapliyal
 }

