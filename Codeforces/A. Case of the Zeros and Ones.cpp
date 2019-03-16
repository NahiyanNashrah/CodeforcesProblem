#include<bits/stdc++.h>
using namespace std;

int main()
{
    int stringLength,a=0,b=0;
    cin>>stringLength;
    string s;
    cin>>s;

    int length=s.size();
    for(int i=0;i<length;i++)
    {
        if(s[i]=='0')
            a++;
        else if(s[i]=='1')
            b++;
    }
    if(a==b)
        cout<<"0"<<endl;
    else if(a>b)
        cout<<length-(b*2)<<endl;
    else
        cout<<length-(a*2)<<endl;

}
