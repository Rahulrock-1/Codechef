#include<bits/stdc++.h>
using namespace std;

int getbit(int n, int pos)
{
    return ((n & (1<<pos))!=0);
}
int setbit(int n, int pos)
{
    return (n | (1<<pos));
}
int clearbit(int n, int pos)
{
    int mask = ~(1<<pos);
    return (n & mask);
}

int updatebit(int n, int pos, int val)
{
    int mask = ~(1<<pos);
    return (n |(val<<pos));
}

int main()
{
    int n, pos,val;
    cin>>n>>pos>>val;
    cout<<getbit(n,pos)<<endl;
    cout<<setbit(n,pos)<<endl;
    cout<<clearbit(n,pos)<<endl;
    cout<<updatebit(n,pos,val)<<endl;
}