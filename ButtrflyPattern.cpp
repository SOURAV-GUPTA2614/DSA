#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;


      for(int i=1;i<=n/2+1;i++)
    {

       for(int j=1;j<=n;j++)
       {
           if(i>=j||i+j>=n+1)
            cout<<j;
           else
            cout<<" ";

       }
       cout<<"\n";

    }

    for(int i=n/2+2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i+j<=n+1||j>=i)
                cout<<j;
            else
                cout<<" ";
        }
        cout<<"\n";

    }
    return 0;
}

