#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,m=100,x=0;
    cin>>n;
    int a[n],p[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>p[i];
        if(p[i]<m)
           {
             m=p[i];
             sum+=(a[i]*m);
           }
           else
            sum+=(a[i]*m);
    }

   cout<<sum<<endl;
}
