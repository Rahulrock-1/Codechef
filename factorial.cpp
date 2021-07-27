#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cpp_int fact = 1;
        for(int i=1; i<=n; i++)
        {
            fact = fact*i;
        }
        cout<<fact<<endl;
    }
}
