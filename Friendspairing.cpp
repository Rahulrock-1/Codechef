#include<bits/stdc++.h>
using namespace std;

int frinedPairing(int n)
{
    if(n == 0 || n==1 || n==2)
        return n;

    return frinedPairing(n-1) + frinedPairing(n-2)*(n-1);
}
int main()
{
    int n; 
    cin>>n;
    cout<<frinedPairing(n)<<endl;
}