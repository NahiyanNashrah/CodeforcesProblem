#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string a,c;
    cin>>a;
    int len = a.length() ;

    for(int i=0;i<len;i++)
        a[i]=tolower(a[i]);

    int i,j;
    for(i=0,j=0;i<len;i++)
    {
        if(a[i] == 'a' || a[i] == 'e'|| a[i] == 'i'||a[i] == 'o'|| a[i] == 'u' || a[i] == 'y')
            continue;
        else
            printf(".%c",a[i]);

    }
    return 0;

}
