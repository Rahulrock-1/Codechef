#include<bits/stdc++.h>
using namespace std;

int Kanpsack(int val[], int wt[], int n, int W)
{
    if(n == 0 || W==0)
    {
        return 0;
    }
    if(wt[n-1] >W)
    {
        return Kanpsack(val, wt, n-1, W);
    }
    return max(Kanpsack(val, wt, n - 1, W - wt[n-1])+val[n-1], Kanpsack(val, wt, n-1, W));
}

int main()
{
    int n,m,W;
    cin>>n>>m>>W;
    int wt[n];
    int val[m];
    for(int i =0; i<n; i++)
        cin>>wt[i];
    for(int i =0; i<m; i++)
        cin>>val[i];
    int k;
    cin>>k;
    // int val[]={100,50,150};
    // int wt[] = {10, 20, 30};
    // int W = 50;
    cout<<Kanpsack(val,wt,k,W)<<endl;
}