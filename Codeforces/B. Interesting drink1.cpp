#include<bits/stdc++.h>
using namespace std;

int main()
{

    int numberOfShop,numberOfDays,numberOfCoins;
    cin>>numberOfShop;
    int priceOfBottles,s[110001] = {0};
    //memset(s,0,100001);

    for(int i=0;i<numberOfShop;i++)
    {
        cin>>priceOfBottles;
        s[priceOfBottles]++ ;
    }

    for(int i=1;i<100001;i++)
    {
        s[i] += s[i-1] ;
    }

    cin>>numberOfDays ;

     while(numberOfDays--)
    {
        cin>>numberOfCoins;
        cout<<s[numberOfCoins<= 100000 ? numberOfCoins : 100000]<<endl ;
    }
    return 0 ;
}
