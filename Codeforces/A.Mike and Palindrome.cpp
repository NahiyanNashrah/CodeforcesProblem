#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,r;
    cin>>s;
    r=s;
    int c=0,f=0;
    reverse(r.begin(),r.end());
    int l=s.size();
    if((l%2) == 0 && r==s)
        cout<<"No"<<endl;
    else
    {
       for(int i=0;i<(l/2);i++)
        {
            if(s[i]==r[i])
                continue;
            else
                c++;
        }
    if(c==1 || (l%2==1) && r==s)
        cout<<"Yes"<<endl;
    else
         cout<<"No"<<endl;
    }
}
