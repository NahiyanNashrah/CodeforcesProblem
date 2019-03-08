#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c1,c2,c3,c4,c5,c=0;
    cin>>c1>>c2>>c3>>c4>>c5;
    c=(c1+c2+c3+c4+c5);
    if(c%5 == 0 && c/5 != 0)
        cout<<c/5<<endl;
    else
        cout<<"-1"<<endl;
    return 0;
}
