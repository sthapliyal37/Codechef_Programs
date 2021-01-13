#include<bits/stdc++.h>
using namespace std;
int main()
{
	int tt;
	cin>>tt;
	ofstream outfile;
	outfile.open("output.txt",ios_base::out);
	for(int kk=0;kk<tt;kk++)
	{
			int n;
			cin>>n;
			char matrix[n][n];
			string str[2];
			for(int i=0;i<2;i++)
				cin>>str[i];
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(i==j)
						matrix[i][j]='Y';
else if(str[1][i]=='Y' && str[0][j]=='Y' && (abs(i-j)==1||(j!=0 && matrix[i][j-1]=='Y' && str[1][j-1]=='Y')||(i!=0 && matrix[i-1][j]=='Y' && str[1][i-1]=='Y' && str[0][i-1]=='Y')))
						matrix[i][j]='Y';
					else //if(str[1][i]=='N' || str[0][j]=='N')
						matrix[i][j]='N';
					//cout<<matrix[i][j]<<" "<<i<<" "<<j<<endl;
				}
			}
			outfile<<"Case #"<<kk+1<<":"<<endl;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
					outfile<<matrix[i][j];
				outfile<<endl;
			}
	}
return 0;
}
