#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i] == 1)
        {
            f=1;
            cout<<"HARD"<<endl;
            break;
        }
    }
    if(f == 0)
        cout<<"EASY"<<endl;
    return 0;
}
