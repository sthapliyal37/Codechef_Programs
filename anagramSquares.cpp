#include<bits/stdc++.h>
using namespace std;
//Function for Printing final result
void printResult(map<string,set<long long int> > m)
{
    map<string,set<long long int> > ::iterator itr,max_itr;
    long long maxi=-1;
    for(itr=m.begin();itr!=m.end();++itr)
    {
        long long int  siz1=(itr->second).size();	
        if(maxi<siz1)			
        {
            maxi=siz1;
            max_itr=itr;
        }
        else if(maxi==siz1)			//if size of two sets are same 
        {

            if((*(max_itr->second).rbegin())<*(itr->second.rbegin()))	//Check set with maximum element and store the result
            {
                            maxi=siz1;
                            max_itr=itr;			
            }
        }
     }
    long long int rslt=*(max_itr->second).rbegin();		//Storing max element of set 
    cout<<rslt<<endl;					//Printing final Result
}

//Function for finding anagramic squares
void anagramicSquares(long long int k,long long int end)
{
    map<string,set<long long int> > m;	//Map set for storing anagramic sequence  
    long long int start=pow(10,end-1);
    end=pow(10,end);
    for(long long int i=start;i<=end;i++)
    {
        long long int x=i*i;		
        ostringstream str1;
        str1<<x;					//Converting int to string
        string str = str1.str();		
        if(str.length()==k)
        {
            sort(str.begin(),str.end());		// sorting string for storing number at exact map position 
            m[str].insert(x);				//Inserting number at map
        }
    }
    	printResult(m);	//Function call print Result
}
 
 //Driver Function 
int main()
{
    long long int k=5;		//size of anagramic set	
    long long int end;
    if(k%2==0)
        end=k/2;
    else
        end=((k+1)/2);
    anagramicSquares(k,end);		//Function Call for anagramic squares   
    return 0;
}

