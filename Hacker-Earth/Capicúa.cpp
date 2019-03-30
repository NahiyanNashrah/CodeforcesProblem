#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin>>T;
    while(T--)
    {
        string n,r;
        cin>>n;
        r=n;
        int l=n.size();
        reverse(r.begin(),r.end());
        if(r==n)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
