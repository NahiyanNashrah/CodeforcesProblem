#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long long int T,N;
    cin>>T;
    while(T--)
    {
        cin>>N;
        string a;
        int f=0;
        cin>>a;
        int len=a.length();

        for(int i=0;i<len;i++)
        {
            if(a[i]=='U')
                f=1;
            else if(a[i]=='A')
                a[i]='T';
            else if(a[i]=='T')
               a[i]='A';
            else if(a[i]=='G')
                a[i]='C';
            else if(a[i]=='C')
                a[i]='G';

        }
        if(f==1)
         cout<<"Error RNA nucleobases found!"<<endl;
         else
            cout<<a<<endl;

    }
    return 0;
}
