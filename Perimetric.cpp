#include<bits/stdc++.h>
using namespace std;
int main()
{
	ifstream in;
	ofstream out;
	in.open("perimetric_chapter_1_validation_input.txt");
	out.open("perimetric_chapter_1_output.txt",ios_base::out);
	long long tt;
	in>>tt;
	for(long long qq=0;qq<tt;qq++)
	{
		long long n,k,w;
		in>>n>>k>>w;
		long long l[n];
		
		for(long long i=0;i<k;i++)
			in>>l[i];
		
		long long al,bl,cl,dl;
		in>>al>>bl>>cl>>dl;
		
		long long h[n];
		
		for(long long i=0;i<k;i++)
			in>>h[i];
		
		long long ah,bh,ch,dh;
		in>>ah>>bh>>ch>>dh;
	
		if(k!=n)
		{
			for(long long i=k;i<n;i++)
			{
				l[i]=((al*l[i-2] + bl*l[i-1] + cl)%dl)+1;
				h[i]=((ah*h[i-2] + bh*h[i-1] + ch)%dh)+1;
			}
		}
		long long current_x=0;
		long long perimeter=1;
		for(long long i=0;i<n;i++)
		{
			perimeter*=(2*(l[i]+w+h[i]));
			current_x=l[i]+w;
			if(qq<2)
				cout<<perimeter<<endl;
		}
		out<<"Case #"<<qq+1<<": "<<perimeter%(1000000007)<<endl;
		
	}
	return 0;
}
