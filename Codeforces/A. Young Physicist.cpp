#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    int n, sumX=0,sumY=0,sumZ=0;
    cin>>n;
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i]>>z[i];
        sumX+=x[i];
        sumY+=y[i];
        sumZ+=z[i];
     }
     if(sumX == 0 && sumY ==0 && sumZ==0)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;

}
