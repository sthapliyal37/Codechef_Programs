#include<bits/stdc++.h>
using namespace std;


int main() {
    string str,rslt,rslt2;
    cin>>str;
    int arr[26];
    memset(arr,0,sizeof(arr));
    for(int i=0;i<str.length();i++)
    {
            arr[str[i]-'a']++;
    }
    int index=-1;
    char mid='A';
    for(int i=0;i<26;i++)
    {
        char x=(i+'a');
        while(arr[i]>1)
        {
            arr[i]-=2;
            rslt+=x;
        }
        if(index==-1 && arr[i]==1)
        {
            index=1;
            mid=x;
        }
    }
    rslt2=rslt;
    reverse(rslt2.begin(), rslt2.end());
    if (mid=='A')
        rslt=rslt + rslt2;
    else
        rslt=rslt + mid + rslt2;
    cout<<rslt;
    return 0;
}

