#include<bits/stdc++.h>
using namespace std;

int fuel_tank(int N, int K, int M,long long arr[]) 
{ 
    int count = 0; 
    int i = 0; 
    int distCovered = 0;   
    while (distCovered < N) { 
        if (i < M && compulsory[i] <= (distCovered + K)) { 
            distCovered = compulsory[i]; 
            i++; 
        }   
        else
        {
            distCovered += K; 
        }
        if (distCovered < N)
        { 
            count++;
         } 
    } 
    return count; 
} 

int main()
{
	ifstream in;
	ofstream out;
	in.open("running_on_fumes_chapter_1_validation_input.txt");
	out.open("output_fuel_tank.txt",ios_base::out);
	long long int tt=1;
	in>>tt;
	for(long long qq=0;qq<tt;qq++)
	{
		long long n=5,m=3;
		in>>n>>m;
		long long arr[n];
		for(long long i=0;i<n;i++)
			in>>arr[i];
		int comp[]={0,3};
		out<<"Case #"<<qq+1<<": "<<fuel_tank(n,m,2,arr)<<endl;
	}
	return 0;	
}
