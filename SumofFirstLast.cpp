#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n , first, last;
        cin>>n;
        first = n;
        last = n%10;
        while(n >=10)
        {
            n=n/10;
        }
        first = n;
        cout<<first+last<<endl;
    }
}
