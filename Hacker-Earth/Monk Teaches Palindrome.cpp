#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
   for(int i=0;i<T;i++)
    {
        string s,x;
        cin>>s;
        x=s;
        int len=x.size();
        reverse(x.begin(),x.end());
        if(x==s)
        {
            if(len%2 == 0)
                cout<<"YES EVEN"<<endl;
            else
                cout<<"YES ODD"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
