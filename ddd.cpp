#include<bits/stdc++.h>
using namespace std;

vector <pair < int,pair< int,int > > > v;	
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
	//memset(distance,999,sizeof(distance));
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
	for(int i=0;i<vertices;i++)
	{
		cout<<i<<" "<<distance[i]<<" "<<parent[i]<<endl;
	}
	
}

int main()
{
	int vertices,edges;
	cin>>vertices;
	cin>>edges;
	for(int i=0;i<edges;i++)
	{
		int u,v1,w;
		cin>>w>>u>>v1;
		v.push_back(make_pair(w,make_pair(u,v1)));
		v.push_back(make_pair(w,make_pair(v1,u)));
	}
	cout<<"___________"<<endl;
	Dijkstra_shortest_path(vertices,edges);
	return 0;
}
