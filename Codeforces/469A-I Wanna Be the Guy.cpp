#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numberOfLevels,levelsOfX,levelsOfY,c=0,f=0;
    cin>>numberOfLevels>>levelsOfX;
    int levels[numberOfLevels+1]={0};
    for(int i=0;i<levelsOfX;i++)
        {
            cin>>c;
            levels[c]+=c;
        }
    cin>>levelsOfY;
    for(int i=0;i<levelsOfY;i++)
        {
            cin>>c;
            levels[c]+=c;
        }
    for(int i=1;i<=numberOfLevels;i++)
       if(levels[i]==0)
       {
           f=1;
           break;
       }
    if(f==1 )
        cout<<"Oh, my keyboard!"<<endl;
    else
        cout<<"I become the guy."<<endl;


}
