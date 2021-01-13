#include<bits/stdc++.h>
using namespace std;
//Function To print Result (summation of n-digit integer array)
void printResult(vector<int> result)
{
	reverse(result.begin(),result.end());	//For Actual Result we have to reverse the array
        int i=0;
	while(i<result.size())
        {
          	  cout<<result[i];		//Print Result
          i++;
        }
           cout<<endl; 	
}
//Function To calculate sum
void big_sum(string v[],int n,int N)
{
	vector<vector<int> > x(1000);		//Result to store array-numbers in integer format
	for(int i=0;i<n;i++)
        {
           for(int j=0;j<N;j++)
           {
               x[i].push_back(v[i][j]-'0');	//Converting each element from character to integer
	   }			    
        }
        int carry=0;				//Variable for storing carry
        vector<int> result;			//Array for storing result
        for(int i=N-1;i>=0;i--)
        {
            int sum=0;
            for(int j=0;j<n;j++)
             sum+=x[j][i];			//Counting sum
           sum+=carry;
           int temp=sum;
            int count=0;			//variable for counting number of of digits
            while(temp>9)
            {
                temp=temp%10;		
                count++;		//Count number of digits
            }
            long long int k=pow(10,count);		
            if(k!=1)
            	carry=(double)sum/k;    	//if number is more then 9 store everything else unit digit in carry        
            sum=sum%10;				//single digit
            result.push_back(sum);			//appending digit by digit into result array
        }
        while(carry!=0)
        {
            int a=carry%10;
            result.push_back(a);	//append result until carry becomes 0
            carry=carry/10;
        }
        printResult(result);			
}
//Driver Function
int main()
{
        int n=5;		//n is size of array
        int N=10;		//N is number of digit in integers 
	string v[n]={"1111111111","1111111111","1111111111","1111111111","1111111111"};	
	big_sum(v,n,N);		//Function call
    return 0;
}

