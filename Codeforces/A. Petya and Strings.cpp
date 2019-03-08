#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char s1[101],s2[101];
    cin>>s1>>s2;

    if(0==strcmpi(s1,s2))
        cout<<"0"<<endl;
    else if(0>strcmpi(s1,s2))
        cout<<"-1"<<endl;
    else
        cout<<"1"<<endl;
    return 0;
}
