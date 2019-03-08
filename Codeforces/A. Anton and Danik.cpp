#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0,d=0;
    cin>>n;
    char s[100000];
    cin>>s;
    int l=strlen(s);
    sort(s,s+l);
    for(int i=0;i<l;i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='D')
            d++;
    }
    if(a>d)
        cout<<"Anton"<<endl;
    else if(a<d)
         cout<<"Danik"<<endl;
    else if(a==d)
        cout<<"Friendship"<<endl;

    return 0;
}
