#include<bits/stdc++.h>
using namespace std;

int main()
{
    char p[101];
    cin>>p;
    int f=0;
    int l=strlen(p);
    for(int i=0;i<l;i++)
    {
        if(p[i]=='H' || p[i]=='Q'||p[i]=='9')
        {
            f=1;
            break;
        }
        else
            continue;
    }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
