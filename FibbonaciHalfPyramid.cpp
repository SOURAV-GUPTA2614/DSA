#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int first=0;
    int second=1;
    cout<<second<<"\n";
    int num;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            num=first+second;
            cout<<num<<" ";
            first=second;
            second=num;
        }
        cout<<"\n";
    }
    return 0;

}
