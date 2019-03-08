#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[101];
    cin>>s;
    int l=0,u=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='a' && s[i]<='z')
            l++;
        else
            u++;
    }
    if(l>=u)
    {
        for(int i=0;i<strlen(s);i++)
            s[i]=tolower(s[i]);
    }
    else
        for(int i=0;i<strlen(s);i++)
           s[i]=toupper(s[i]);

    cout<<s<<endl;

    return 0;
}
