#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
     for(int i=1;i<=n;i++)
    {
        for(int k=1;k<i;k++)
            cout<<" ";
        cout<<char(65+n-i);
        for(int j=n;j>i;j--)
            cout<<" ";
        for(int j=n;j>i+1;j--)
            cout<<" ";
        if(i<n-1)
        cout<<char(65+n-i);
        cout<<"\n";
    }


    return 0;}
