#include<bits/stdc++.h>
using namespace std;
int main()
{
	ifstream infile;
	ofstream outfile;
	infile.open("alchemy_input.txt");
	outfile.open("output_color.txt",ios_base::out);
	int tt;
	infile>>tt;
	for(int qq=0;qq<tt;qq++)
	{
		int n;
		infile>>n;
		string str;
		infile>>str;
		for(int i=0;i<str.length()-2 && str.length()>2;i++)
		{
			int B=0,A=0;
			if(str[i]!=str[i+1] || str[i]!=str[i+2])
			{
				if(str[i]=='A')
					A++;
				else
					B++;
				if(str[i+1]=='A')
					A++;
				else
					B++;
				if(str[i+2]=='A')
					A++;
				else
					B++;
				str.erase(i+1,2);
				if(A>B)
					str[i]='A';
				else
					str[i]='B';
				i=-1;	
				//outfile<<str<<" "<<i<<endl;
			}			
		}
		outfile<<"Case #"<<qq+1<<": ";
		if(str.length()==1)
			outfile<<'Y';
		else
			outfile<<'N';
		outfile<<endl;
		//outfile<<str<<endl;
		
		
	}		
	return 0;
}
