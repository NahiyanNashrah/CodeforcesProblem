#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s,t,r;
    cin>>s>>t;
    r=s;
    int l=r.length();
    reverse(r.begin(),r.end());
    if(r==t)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
