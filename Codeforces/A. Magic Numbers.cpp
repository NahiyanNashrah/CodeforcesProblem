#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f=0,c=0;
    if(s[0]=='1')
    {
        for(int i=1;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                c=0;
                continue;
            }
            else if(s[i]=='4')
            {
                 c++;
                 if(c>2)
                 {
                     f=1;
                     break;
                 }
            }
            else
            {
                f=1;
                break;
            }
        }
    }
     else
        f=1;
    if(f==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
