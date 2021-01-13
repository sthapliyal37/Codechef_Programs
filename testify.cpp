#include<bits/stdc++.h>
using namespace std;

vector <pair < int,pair< int,int > > > v;	
vector<int> result;
void printPath(int parent[], int j) 
{ 
      
    if (parent[j] == j) 
        return; 
  
    printPath(parent, parent[j]); 
  
    result.push_back(j); 
} 
 



int min_element(int distance[],bool selection[],int vertices)
{
	int min_e=INT_MAX,min_i;
	for(int i=0;i<vertices;i++)
	{
		if(selection[i] && min_e>distance[i])
		{
			min_e=distance[i];
			min_i=i;
		}
	}
	return min_i;	
}

void Dijkstra_shortest_path(int vertices,int edges)
{
	int parent[vertices];
	int distance[vertices];
	bool selection[vertices];
	memset(selection,true,sizeof(selection));
	for(int i=0;i<vertices;i++)
		distance[i]=9999;	
	distance[0]=0;
	for(int i=0;i<vertices;i++)
		parent[i]=i;
	for(int i=0;i<vertices-1;i++)
	{
	   int min_index=min_element(distance,selection,vertices);
	   selection[min_index]=false;
	   for(int j=0;j<2*edges;j++)
	   {
	if(v[j].second.first==min_index && selection[v[j].second.second] && distance[min_index]+v[j].first<distance[v[j].second.second])
			{
				distance[v[j].second.second]=distance[min_index]+v[j].first;
				parent[v[j].second.second]=min_index;
			}			
		}
	}
	
	printPath(parent,vertices-1);
	int mm=v[result[0]].first;
	for(int i=1;i<result.size();i++)
	{
		mm=max(mm,v[result[0]].first);
	}
	cout<<mm<<endl;
}

int main()
{

	int n,m;
	cin>>n>>m;
	int matrix[n][m];
	int value[n][m];
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>matrix[i][j];
			value[i][j]=count;
			count=count+1;		
		}
	}
	int vertices,edge=0;
		vertices=n*m;
	for(int i=0;i<n;i++)
	{

		for(int j=0;j<m;j++)
		{
			if(i!=0){
				v.push_back(make_pair(abs(matrix[i][j]-matrix[i-1][j]),make_pair(value[i][j],value[i-1][j])));
				edge++;
			}
			if(j!=0){
				edge++;
				v.push_back(make_pair(abs(matrix[i][j]-matrix[i][j-1]),make_pair(value[i][j],value[i][j-1])));}
			if(i!=n-1){
				edge++;
				v.push_back(make_pair(abs(matrix[i][j]-matrix[i+1][j]),make_pair(value[i][j],value[i+1][j])));}
			if(j!=m-1){
				edge++;
				v.push_back(make_pair(abs(matrix[i][j]-matrix[i][j+1]),make_pair(value[i][j],value[i][j+1])));
				}			
		}
	}


	Dijkstra_shortest_path(vertices,edge/2);
	return 0;
}
