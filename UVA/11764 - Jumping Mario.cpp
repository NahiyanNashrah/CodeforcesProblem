#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
            cin>>a[i];
        int h=0,l=0;

        for(int i=0;i<N-1;i++)
        {
            if(a[i]<a[i+1])
                   h++;
            else if(a[i]>a[i+1])
                    l++;
            else if(a[i]==a[i+1])
                continue;
        }
        cout<<"Case "<<i<<": "<<h<<" "<<l<<endl;
    }
    return 0;
}
