#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    char x;
    cin>>x;
   string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        int j=s.find(a[i]);
        if(x=='R')
         cout<<s[j-1];
        else if(x=='L')
             cout<<s[j+1];
    }
    cout<<endl;
}
