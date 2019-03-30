#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       char s[251];
        cin>>s;
        int f=0;
        int l=strlen(s);
        for(int i=0;i<l;i++)
        {
            if(s[i+1]-s[i]==1||s[i+1]-s[i]==-1)
               {
                   continue;
                   cout<<s[i+1]<<" ";
               }
            else
            {
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
