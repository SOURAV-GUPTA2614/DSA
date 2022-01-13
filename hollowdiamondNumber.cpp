#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int k;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>i;j--)
            cout<<" ";
        cout<<i;
        for(int k=1;k<i;k++)
            cout<<" ";
        for(int m=1;m<i-1;m++)
            cout<<" ";
        if(i>1)
            cout<<i;
        cout<<"\n";

    }

      for(int i=1;i<n;i++)
    {
        for(int k=0;k<i;k++)
            cout<<" ";
        cout<<n-i;
        for(int j=n;j>i+1;j--)
            cout<<" ";
        for(int j=n;j>i+2;j--)
            cout<<" ";
        if(i<4)
        cout<<n-i;
        cout<<"\n";
    }

    return 0;
}
