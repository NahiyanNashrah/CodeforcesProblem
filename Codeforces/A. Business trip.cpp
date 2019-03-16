#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,c=0,res=0,f=0;
    cin>>k;
    int a[12];
    for(int i=0;i<12;i++)
        cin>>a[i];
    sort(a,a+12);
    for(int i=11;i>=0;i--)
    {
        if(res >=k)
        {
            f=1;
            break;
        }
        else
        {
            res += a[i];
            c++;
        }
    }
    if(f==1 || res>=k)
        cout<<c<<endl;
    else if(res<k || f==0)
        cout<<"-1"<<endl;
}
