#include<bits/stdc++.h>
using namespace std;
# define ROW 3
#define COL 4
//Function for Finding Shortest Path
long long int shortestPath(long long int matrix[ROW][COL],long long int row,long long int col)
{
    long long int dis[row][col];
    dis[0][0]=matrix[0][0];
    for(long long int i=1;i<row;i++)
            dis[0][i]=matrix[0][i]+dis[0][i-1];			//Intialize every coloumn of 0'th row with distance(summation of distance upto last column and cost of current column)
    for(long long int i=1;i<col;i++)
            dis[i][0]=matrix[i][0]+dis[i-1][0];//Intialize 0'th coloumn of every row with distance(summation of distance upto last column of last row and cost of current column)
    for(long long int i=1;i<row;i++)
    {
        for(long long int j=1;j<col;j++)
        {
            dis[i][j]=matrix[i][j]+min(dis[i][j-1],dis[i-1][j]);	//find minimum of move up or down at current state
        }
    } 
    return dis[row-1][col-1];		//return final solution
}
//Driver Function
int main()
{
    long long int matrix[ROW][COL]={5,3,9,8,
			6,1,3,6,
			2,3,2,1}; 
    cout<<shortestPath(matrix,ROW,COL);
    return 0;
}

