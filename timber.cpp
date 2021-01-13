#include<bits/stdc++.h>
using namespace std;
{
	ifstream infile;
	ofstream outfile;
	infile.open("");
	outstream.open("output_timber.txt");
	int tt;
	infile>>tt;
	while(tt--)
	{
		long long int n;
		infile>>n;
		vector<pair<long long,pair<long long ,long long> > >timber;
		for(long long int i=0;i<n;i++)
		{
			long long a,h;
			infile>>a>>h;
			timber.push_back(make_pair(h-a,make_pair(a,a+h)));
		}
				
		
	} 
	return 0;
}
