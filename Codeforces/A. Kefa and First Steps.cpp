#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n,c=1,s=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
               c++;
        else
           {
               if(s<c)
               {
                   s=c;
                   c=1;
               }
               else
                c=1;
           }
    }
    cout<<max(s,c);

    return 0;
}
