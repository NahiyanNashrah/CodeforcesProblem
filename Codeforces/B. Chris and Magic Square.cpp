#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,f=1;;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int r=0,d=0,c=0,t=0,s=0,i,j,k=0;
//    for(i=0;i<n;i++)
//    {
        for(j=0;j<n;j++)
        {
            r+=a[0][j];
            c+=a[j][0];
            if(r==c)
                t=r;
            if(i==j)
            {
                k=i;
                d+=a[i][i];
                if(t!=0 && r==d)
                    t=r;
            }
            if(c==d)
            {
                t=c;
            }
        }
   // }

    for(int i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            s+=a[i][j];
        }
        if(s>t)
        {
            f=0;
            break;
        }
        else if(s==t)
            continue;
        else if(s<t)
        {
            int x=t-s;
        }
        cout<<r<<" "<<c<<" "<<d<<" "<<t<<endl;
    }
    if(f==0)
        cout<<"-1"<<endl;
    else
        cout<<t<<endl;
}
