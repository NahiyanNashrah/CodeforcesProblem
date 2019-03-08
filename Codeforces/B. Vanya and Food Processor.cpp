#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,h,k,c=0,s=0;
    cin>>n>>h>>k;
    int a[n];

    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;)
    {
        if(c+a[i]<=h)
        {
            c = a[i]-k;
            if(c+a[i+1]>h)
                s+=2;
            else if(c+a[i+1]<=h)
                s++;
            i++;
            if(i<=n)
                break;
            cout<<"if "<<s<<" "<<i<<endl;
        }
        else
            {
                c=0;
                s++;
                i--;
                if(i<=n)
                    break;
                cout<<"else "<<s<<" "<<i<<endl;
            }
    }

    cout<<s<<endl;
}
