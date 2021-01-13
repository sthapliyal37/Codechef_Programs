#include<bits/stdc++.h>
using namespace std;

string specialString(string str)
{
	char a=0,b=0;
        bool flag=true,flag1=true; 
        for(int i=0;i<str.length();i++)
        {
            if(flag1==false && str[i]=='a')			//if a is occuring after occurrence of b return no
            {
                return "No";
                  
            }
            if(str[i]=='b' && a==0)				//if b is occuring without any occurrence of a return no
            {
                return "No";
            }
            if(str[i]!='a' && str[i]!='b')			// if string contains any 3rd character return no
            {
                return "No";
            }
            else if(str[i]=='a')
            {
                a++;
            }
            else if(str[i]=='b')
            {
                b++;
                flag1=false;
            }
        }
        if((a==0 || b==0) && flag)			// if length of string is 0 return no
                        return "No";
	return "Yes";




}
int main()
{
        string str="baa";
        cout<<specialString(str);
return 0;
}
