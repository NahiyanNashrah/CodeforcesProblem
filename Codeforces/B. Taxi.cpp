#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    long long int n,a1=0,a2=0,a3=0,a4=0,sum=0;
    cin>>n;

    for(int i=0,x;i<n;i++)
    {
        cin>>x;
        if(x==1)
            a1++;
        else if(x==2)
            a2++;
        else if(x==3)
            a3++;
        else
            a4++;
    }
    sum+=a4;
    a4=0;
    sum+=(a2/2);
    a2=a2%2;
    if(a1>=a3)
    {
        sum+=a3;
        a1=a1-a3;
        a3=0;
        sum+=(a1/4);
        a1=a1%4;
        if(a1+(a2*2)<=4 && a1+(a2*2)>0)
        {
            sum++;
            a1=0;
            a2=0;
        }
        else if(a1==3 && a2==1)
        {
            sum+=2;
            a1=0;
            a2=0;
        }
    }
    else
    {
        sum+=a1;
        a3=a3-a1;
        a1=0;
        sum+=a3+a2;
    }
    cout<<sum<<endl;
    return 0;
}
