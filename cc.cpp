#include <iostream> 
#include <vector> 
using namespace std; 
vector<vector<char> >  rlt;

void printAllPath(vector<vector<char> > vec, vector<vector<char> > hash, int i, int j, vector<char> res = {}) 
{ 
	if (i < 0 || j < 0 || i >= vec.size() || 
	j >= vec[0].size() || hash[i][j] == 1) 
		return; 

	if (i == vec.size() - 1 && j == vec[0].size() - 1)
	 { 

		res.push_back(vec[i][j]); 
		rlt.push_back(res); 
		return; 
	} 

	hash[i][j] = 1; 

	res.push_back(vec[i][j]); 

	printAllPath(vec, hash, i, j + 1, res); 

	printAllPath(vec, hash, i + 1, j, res); 

	res.pop_back(); 

	hash[i][j] = 0; 
} 
 
int main() 
{ 
	int n;
	cin>>n;	
	vector<vector<char> > vec; 
	for(int i=0;i<n;i++)
	{
		vector<char> temp;
		for(int j=0;j<n;j++)
		{
			char a;
			cin>>a;
			temp.push_back(a);
		}
		vec.push_back(temp);
	}	
	vector<vector<char> > hash(n, vector<char>(n, 0)); 
	printAllPath(vec, hash, 0, 0);
	long long int count=0;
	for(int i=0;i<rlt.size();i++)
	{
		string temp="";
		for(int j=0;j<rlt[i].size();j++)
		{
			temp+=rlt[i][j];
		}
		if(temp == string(temp.rbegin(), temp.rend())){
			cout<<temp<<endl;
			count+=1;}
		
	}
	count=count%(1000000007);
	cout<<count<<endl;
	return 0; 
} 

