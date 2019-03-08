#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s,s2="hello";
    cin>>s;
    int l=s.length();
    int f=0;
    for(int i=0,j=0;i<l;i++)
    {
        if(s[i]==s2[j])
        {
            f++;
            j++;
        }
    }
    if(f>=5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
