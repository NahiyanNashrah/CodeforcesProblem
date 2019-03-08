#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long int d,c=0,x=0;
    cin>>d;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            x=a[j]-a[i];
            if(x<=d)
                c++;
        }
    }
    cout<<c*2<<endl;
}
