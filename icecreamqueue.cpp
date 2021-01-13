#include<bits/stdc++.h>
using namespace std;

//Shopkeeper And Pens Function
void shopkeeperAndPens(int arr[],int n)
{	
	int i;
        map<int,int>coins;	//map for storing count of each coin	
        for(i=0;i<n;i++)
        {
            if(arr[i]==5)		//if customer having 5 rupee coin
                coins[5]++;			//incrementing count of coins of 5 in bag of shopkeeper
            else if(arr[i]==10)		//if customer having 10 rupee coin
            {
                if(coins.find(5)!=coins.end() && coins[5]>0)		//shopkeeper should have at least one 5 rupee coin for change
                {
                    coins[5]-=1;		//decrementing count of 5 rupee coin			
                    coins[10]+=1;		//incrementing count of 10 rupee coin
                }
                else
                    break;			//if shopkeeper does'nt have 5 rupee coin then it's not possible to sell pen to everyone
            }
            else if(arr[i]==15)		//if customer having 15 rupee coin
            {
                if(coins.find(10)!=coins.end() && coins[10]>0) //then shopkeer should have at least one 10 rupee coin
                {
                    coins[10]-=1;
                    coins[15]+=1;
                }
                else if(coins.find(5)!=coins.end() && coins[5]>1) //or two 5 rupee coin for change
                {
                    coins[5]-=2;
                    coins[15]+=1;
                }
                else
 			break;			//else selling not possible
            }
       }
        if(i==n)		//if i is equals to n then shopkeeper sold pens to everyone
            cout<<"YES"<<endl;
        else			//else shopkeeper does'nt sold the pens to everyone
            cout<<"NO"<<endl;
}
//Driver Function
int main()
{
        int arr[]={5,15,5,10,5};
        shopkeeperAndPens(arr,sizeof(arr)/sizeof(arr[0]));
            return 0;
}
