#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    string n;
    cin>>n;
    long long int c=0,w=0;
    long long f=n.size();
    for(int i=0;i<f;i++)
    {
         if(n[i]=='4'||n[i]=='7')
           {
               c++;
           }
    }
    if(c==4||c==7)
        cout<<"YES"<<endl;
    else
         cout<<"NO"<<endl;
    return 0;

}

