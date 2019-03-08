#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0;
    cin>>n;
    int a[n],b[n];
    for(int i =0;i<n;i++)
        cin>>a[i]>>b[i];
    int t=b[0];
    for(int i=1,j=1;i<n;j++,i++)
    {
        if(t>m)
            m=t;
        t=(t-a[i])+b[j];
    }
    cout<<m<<endl;
    return 0;
}
