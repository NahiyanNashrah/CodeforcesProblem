#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    char a[n],l[n];
    for(int i=1;i<n;i++)
        l[i]=0;
    l[0]=1;
    cin>>a;
    for(int i=0;i<n;i++)
    {
        if(a[i]<a[i+1] && l[i]+1 > l[i+1])
            {
                l[i+1]=l[i]+1;
                if(l[i+1]>c)
                    c=l[i+1];
            }

    }
    cout<<c;

    return 0;
}
