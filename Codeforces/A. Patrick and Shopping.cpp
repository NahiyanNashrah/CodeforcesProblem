#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int d1,d2,d3,c=0;
    cin>>d1>>d2>>d3;
    c=min(min(min((d1*2)+(d2*2),(d1*2)+(d3*2)),(d2*2)+(d3*2)),(d1+d2+d3));
    cout<<c<<endl;
}
