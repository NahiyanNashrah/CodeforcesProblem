#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfMagnets,c=1;
    cin>>numberOfMagnets;
    int a[numberOfMagnets];
    for(int i=0;i<numberOfMagnets;i++)
    cin>>a[i];
    for(int i=0;i<numberOfMagnets-1;i++)
    {
        if(a[i]!=a[i+1])
            c++;
    }

    cout<<c<<endl;
}
