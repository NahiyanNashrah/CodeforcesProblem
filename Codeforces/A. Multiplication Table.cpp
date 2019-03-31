#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int tableSize,number,c=0;
    cin>>tableSize>>number;
    if(number<tableSize)
    {
        for(int i=1;i<=number;i++)
            if(number%i==0 && (number/i<=tableSize))
                c++;
    }
    else
    {
         for(int i=1;i<=tableSize;i++)
            if(number%i==0 && (number/i<=tableSize))
                c++;
    }
    cout<<c<<endl;
}
