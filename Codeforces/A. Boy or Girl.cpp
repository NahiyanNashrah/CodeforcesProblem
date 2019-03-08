#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char a[101];
    cin>>a;
    int c=0;
    int n=strlen(a);
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i] != a[i+1])
                c++;
    }
    if(c%2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
