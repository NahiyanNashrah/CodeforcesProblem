#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    int a[3];
    cin>>n;
    while(n--)
    {
        int l=0;
        for(int i=0;i<3;i++)
            cin>>a[i];
        for(int i=0;i<3;i++)
          {
             if(a[i] == 1)
                l++;
          }
        if(l>1)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
