#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char a[101];
    int f=1;
    cin>>a;
    if(a[0]>='a'&&a[0]<='z'|| a[0]>='A' && a[0]<='Z')
    {
         for(int i=1;i<strlen(a);i++)
         {
             if(a[i]>='A' && a[i]<='Z')
                continue;
             else
             {
                 f=0;
                break;
             }
         }
    }
    if(f==0)
        cout<<a<<endl;
    else
    {
        if(a[0]>='A' && a[0]<='Z')
             a[0]=tolower(a[0]);
        else
            a[0]=toupper(a[0]);
        for(int i=1;i<strlen(a);i++)
             a[i]=tolower(a[i]);
        cout<<a<<endl;
    }
    return 0;
}
