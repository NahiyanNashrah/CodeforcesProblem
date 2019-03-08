#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum=0,x=0;
    cin>>n;
    int a[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        c[i]=sum;
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];

    for(int i=0;i<m;i++)
    {
        cout<<lower_bound(c,c+n,b[i])-c+1<<endl;
    }
}
