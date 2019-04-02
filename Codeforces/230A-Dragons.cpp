#include<bits/stdc++.h>
using namespace std;


int main()
{
    int strengthOfKiriti,numberOfDragons,strengthOfDragon,bonus,f=0;
    vector<pair<int,int> >v;
    cin>>strengthOfKiriti>>numberOfDragons;
    for (int i=0; i<numberOfDragons; i++)
    {
        cin>>strengthOfDragon>>bonus;
        v.push_back(make_pair(strengthOfDragon,bonus));
    }
    sort(v.begin(),v.end());


   for(int i=0;i<numberOfDragons;i++)
   {
       if(strengthOfKiriti>v[i].first)
        {
            strengthOfKiriti+=v[i].second;
        }
       else
       {
           f=1;
           break;
       }
   }
    if(f==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
