#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {
    int p, k=2048,ans=0;
    cin>>p;
    while(p>0)
    {
        ans+=p/k;
        p%=k;
        k/=2;
    }
    cout<<ans<<endl;
    }
}
