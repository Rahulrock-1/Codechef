#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a, b;
        cin>>a>>b;
        if(a>b)
            cout<<a<<" "<<a+b<<endl;

        else
            cout<<b<<" "<<a+b<<endl;
    }
}
