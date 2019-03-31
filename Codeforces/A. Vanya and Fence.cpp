#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfFriends,heightOfFence,c=0;
    cin>>numberOfFriends>>heightOfFence;

    int a[numberOfFriends];

    for(int i=0;i<numberOfFriends;i++)
       {
           cin>>a[i];
           if(a[i]<=heightOfFence)
                c++;
           else
            c+=2;
       }
       cout<<c<<endl;


}
