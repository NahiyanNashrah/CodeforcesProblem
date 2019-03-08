#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long int s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    int c=0,t=0;
    sort(s,s+n);
    for(int i=0;i<m;i++)
    {
        if(s[i]<0)
            c=c+abs(s[i]);
    }
    cout<<c<<endl;

    return 0;
}
