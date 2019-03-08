#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char a[101];
    cin>>a;
    int c=0,f=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i] == a[i+1])
        {
            c++;
            if(c>=6)
            {
                f=1;
                break;
            }
        }
        else
            c=0;
    }
    if(f==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;

}
