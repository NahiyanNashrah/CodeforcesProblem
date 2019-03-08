#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);

    for(int i=0;i<n;i++)
    {
        if(c==a[i])
        {
            c++;
            continue;
        }
        else
            break;
    }
    cout<<c<<endl;
}
