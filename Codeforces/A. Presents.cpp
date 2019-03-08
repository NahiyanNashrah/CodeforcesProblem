#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],r[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<n;j++)
        r[a[j]]=j+1;
    for(int i=1;i<=n;i++)
        cout<<r[i]<<" ";
    cout<<endl;
    return 0;
}
