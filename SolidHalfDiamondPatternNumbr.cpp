#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int k;
    for(int i=1;i<=n;i++)
    {
        k=n;
        for(int j=0;j<i;j++)
        {
            k--;
           cout<<k;

        }

        cout<<"\n";
    }
    for(int i=1;i<n;i++)
    {
        k=n;
        for(int j=n;j>i;j--)
        {
            k--;
            cout<<k;
        }
        cout<<"\n";
    }


    return 0;
}
