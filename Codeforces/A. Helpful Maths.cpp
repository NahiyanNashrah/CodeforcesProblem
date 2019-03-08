#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    char s[101],s1[101];
    cin>>s;
    int l=strlen(s);
    sort(s,s+l);
    for(int i=0,j=0;i<l;i++)
    {
        if(s[i] == '+')
            continue;
        else
        {
            s1[j++]=s[i];
            s1[j++]='+';
        }
       s1[l]='\0';
    }
    cout<<s1<<endl;
   return 0;
}
