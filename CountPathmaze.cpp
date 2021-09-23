#include<bits/stdc++.h>
using namespace std;

int CountPathmaze(int n, int i, int j)
{
    if(i == n-1 && j == n-1)
    {
        return 1;
    }
    if(i >= n || j >= n)
    {
        return 0;
    }
    return CountPathmaze(n, i+1, j) + CountPathmaze(n, i, j+1);
}

int main()
{
    int n, i , j;
    i = 0; j = 0;
    cin>>n;
    cout<<CountPathmaze(n, i, j)<<endl;
}