#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;
    cin>>n;
    int a[2];
    while(n--)
    {
        for(int i=0;i<2;i++)
            cin>>a[i];
        if(a[1]-a[0]>=2)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
