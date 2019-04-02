#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int s[3];
    for(int i=0;i<3;i++)
    {
        cin>>x;
        s[i]=x;
    }
    sort(s,s+3);
    cout<<s[2]-s[0]<<endl;

}
