#include<bits/stdc++.h>
using namespace std;

class Kgec
{
    public:
    void fun()
    {
        cout<<"I am function with no argument"<<endl;
    }
    void fun(int x)
    {
             cout<<"I am function with int argument"<<x<<endl;
    }
    void fun(double x)
    {
        cout<<"I am function with double argument"<<x<<endl;
    }
};

int main()
{
    Kgec obj;
    obj.fun();
    obj.fun(4);
    obj.fun(4.22);
}