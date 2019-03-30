#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testCase,numberOfEggs,maxNumberOfEggs,maxWeight;
    cin>>testCase;
    for(int i=0;i<testCase;i++)
    {
        int res=0,c=0;
        cin>>numberOfEggs>>maxNumberOfEggs>>maxWeight;
        int weightOfEggs[numberOfEggs];
        for(int i=0;i<numberOfEggs;i++)
        {
            cin>>weightOfEggs[i];
            if(i<maxNumberOfEggs)
            {
               res += weightOfEggs[i];
               if(res>maxWeight)
                continue;
               else if(res <= maxWeight)
                c++;
            }
        }
        cout<<"Case "<<i+1<<": "<<c<<endl;
    }
}
