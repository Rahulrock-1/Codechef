#include<bits/stdc++.h>
using namespace std;

class A
{
    private:
    int a = 10;
    protected: int b=3, c = 9;
    public:
    void sumc()
    {
        cout<<"class A"<<endl;
        int d = b+c;
        cout<<d<<endl;
        cout<<a<<endl;
    }
};
// 
class B {
    private :
    int a = 12;
    protected:
    int x = 6;
    int y = 7;
    public:
    void sum()
    {
        cout<<"class B"<<endl;
        int z = x*y;
        cout<<z<<endl;
        cout<<a<<endl; 
    }
};

class C : public A, public B{
    private:
    int s = 40;
    protected:
    int r = 45;
    int u = 9;
    public:
    void div()
    {
        cout<<"calss C"<<endl;
        int f = r/u;
        cout<<f<<endl;
        cout<<s<<endl;
    }
};
int main()
{
    C b;
    A a;
    B c;
    c.sum();
    a.sumc();
    b.sum();
    b.sumc();
    b.div();
}