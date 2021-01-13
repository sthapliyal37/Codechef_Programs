#include<bits/stdc++.h>
using namespace std;
int main()
{
	ofstream out;
	out.open("permutation.txt",ios_base::out);
	string str="aaabbcc";
	do{
		out<<str<<endl;
	}while(next_permutation(str.begin(),str.end()));
	


return 0;
}
