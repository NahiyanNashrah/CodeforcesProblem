#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,totalCup=0,totalPrize=0;
    for(int i=0;i<3;i++)
    {
        cin>>a;
        totalCup+=a;
    }

    for(int i=0;i<3;i++)
    {
        cin>>b;
        totalPrize+=b;
    }
    cin>>n;
    int cupShelf=0,prizeShelf=0,emptyShelf=0;
//    if(totalCup>0 && totalCup<=5)
//        cupShelf=1;
//    else
     cupShelf=(totalCup+5-1)/5;

    //emptyShelf=n-cupShelf;
//    if(totalPrize>0 && totalPrize<=10)
//        prizeShelf= 1;
//    else
        prizeShelf=(totalPrize+10-1)/10;

    if((cupShelf+prizeShelf)>n)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
