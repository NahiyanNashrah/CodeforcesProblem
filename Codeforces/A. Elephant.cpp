#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    cin>>x;
    long long int d=x%5;
    if(d==0)
        cout<<x/5<<endl;
    else
        cout<<(x/5)+1<<endl;
    return 0;
}
