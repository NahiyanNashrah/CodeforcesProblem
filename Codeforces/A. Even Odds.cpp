#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    long long int numberOfintegers,number;
    cin>>numberOfintegers>>number;
    numberOfintegers=(numberOfintegers+1)/2;
    if(number>numberOfintegers)
         cout<<2*(number-numberOfintegers)<<endl;
    else
         cout<<2*number-1<<endl;

}
