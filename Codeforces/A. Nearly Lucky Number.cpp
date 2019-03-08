#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    int c=0,w=0;
    int f=n.size();
    cout<<f<<endl;
    for(int i=0;i<f;i++)
    {
         if(n[i]=='4'||n[i]=='7')
           {
               c++;
               cout<<c<<" ";
           }
    }
    while(c!=0)
    {
        int p=c%10;
        cout<<p<<endl;
        if(p!=4&&p!=7)
            w=1;
        c=c/10;
    }
    if(w==0)
        cout<<"YES"<<endl;
    else
         cout<<"NO"<<endl;
    return 0;

}
