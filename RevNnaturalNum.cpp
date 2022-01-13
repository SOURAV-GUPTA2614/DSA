#include<bits/stdc++.h>
using namespace std;
int printrev(int n)
{
    if(n==0)
       return 0;
    cout<<n<<" ";
    printrev(n-1);
}

int main()
{
    int m;
    cin>>m;
    printrev(m);

}
