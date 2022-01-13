#include<bits/stdc++.h>
using namespace std;
int nat(int n)
{
    if(n==0)
        return 0;

        nat(n-1);
        cout<<n<<" ";

}
int main()
{
    int m;
    cin>>m;
    nat(m);

}
