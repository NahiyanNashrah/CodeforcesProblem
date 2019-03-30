#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string s,x;
        cin>>s;
        x=s;
        int l=s.size();
        reverse(x.begin(),x.end());
        if(x==s)
            cout<<"YES"<<endl;
        else
             cout<<"NO"<<endl;
    }
    return 0;
}
