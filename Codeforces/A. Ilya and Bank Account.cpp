#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    if(s[0]=='-')
    {
        if(s[l-2]>s[l-1])
        {
            if(s[l-1]==0 && l==3)
            {
                s[0]=s[l-1];

                s[l-1]='\0';
                s[l-2]='\0';
            }
        else
        {
            cout<<"ffgh"<<s[0]<<endl;
            s[l-2]=s[l-1];
            s[l-1]='\0';
        }
    }
    else
        s[l-1]='\0';
    cout<<s<<endl;
    return 0;
}
