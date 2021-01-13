#include<bits/stdc++.h>
using namespace std;

//Function for finding maximum index

void maximumIndex(long long step,long long badIndex)
{
	long long max_index=0;		//intilizing max_index variable
	for(long long i=1;i<=step;i++)
		max_index+=i;		//calculating maximum index that can be reached
	long long current_index=max_index,step_t=step;
	while(1)
	{
		while(current_index>0 && step>0)		//if value of index is greater than 0 and step is greater than 0 than only it's possible 
		{
			current_index-=step;		//decrement current_index by step
			if(current_index==badIndex)	//if current index is badIndex
			{
				current_index+=step;	//then remain at the previous index
			}
			step--;			//decrement step by one
		}
		if(current_index<=0)			//if it reaches at 0th index successfully
		{
			cout<<max_index<<endl;		//print result
			break;
		}
		else					//if max index failes to reach at 0th index
		{
			step=step_t;			//Again store step with intial value
			current_index=max_index-1;	//store max_index-1 in current index
			max_index--;			//decremnt in max index
			if(current_index==badIndex)
			{
			    current_index=max_index-1;	// if current index is bad decrement it again
			    max_index--;
			}
		}
	}
		
}
//DRIVER FUNCTION
int main()
{
	long long step=2,badIndex=2;
	maximumIndex(step,badIndex);		//FUNCTION CALL
	return 0;
}


//CODE CONTRIBUTED BY SIDDHANT THAPLIYAL
