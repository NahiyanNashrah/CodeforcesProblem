#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x=0;
    char c;
    cin>>n;
    while(n--)
    {
        cin>>c;
        if(c == '++X')
            {
                x=x+1;
                cout<<x<<endl<<endl;
            }
        if (c == '--X')
            x=x-1;
    }
    cout<<x<<endl;
    return 0;
}
