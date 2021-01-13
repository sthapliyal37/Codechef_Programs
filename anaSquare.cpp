#include<bits/stdc++.h>
using namespace std; 


//Function to check Anagramic Squares
void AnagramicSquares(int k)
{
   map<string,set<long long int> > m;	
    long long int end;
    if(k%2==0)
        end=k/2;		//if k is even then k digit number will be in 10^(k/2)
    else
        end=((k+1)/2);		// if k is odd k digit number will be in 10^(k+1)/2
    long long int start=pow(10,end-1);
    end=pow(10,end);
    for(long long int i=start;i<=end;i++)
    {
        long long int x=i*i;
        ostringstream str1;				
        str1<<x;
        string str = str1.str();
        if(str.length()==k)
        { 
            sort(str.begin(),str.end());
            m[str].insert(x);				//store number at its anagramic group
        }
        else if(str.length()>k)
        {
            break;				//if number of digits are more than k break the loop
        }
    }
    
    map<string,set<long long int> > ::iterator itr,max_itr;
    long long maxi=-1;
    
    for(itr=m.begin();itr!=m.end();++itr)
    {
        long long int  siz1=(itr->second).size();
        if(maxi<siz1)			//check the anagramic group with maximum size
        {
            maxi=siz1;
            max_itr=itr;
        }
        else if(maxi==siz1)		//if size of group is equal check maximum number
        {

            if((*(max_itr->second).rbegin())<*(itr->second.rbegin()))
            {
                            maxi=siz1;
                            max_itr=itr;
            }
        }
     }
    long long int rslt=*(max_itr->second).rbegin();	//extracting max element of maximum iterator
    
    cout<<rslt<<endl;			//Result
	

}
//Driver Function
int main()
{
    long long int k=3;
    AnagramicSquares(k);		//function call
    return 0;
}

