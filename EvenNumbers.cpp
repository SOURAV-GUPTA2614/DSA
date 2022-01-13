#include<bits/stdc++.h>
using namespace std;
int printeven(int n)
{
    if(n==1)
        return 0;
    printeven(n-1);
    if(n%2==0)
        cout<<n<<" ";

}

int main()
{
    int m;
    cin>>m;
    printeven(m);

}

