#include<bits/stdc++.h>
using namespace std;

class Complex
{
    private:
    int real, imag;
    public:
    Complex(int r=0, int i=0)
    {
        real = r;
        imag = i;
    }
    void input()
    {
        cout<<"Enter real and Imaginay number"<<endl;
        cin>>real>>imag;
    }
    Complex operator +(Complex const &c)
    {
        Complex res;
        res.imag = imag + c.imag;
        res.real = real + c.real;
        return res;
    }
    void display()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.input();
    c2.input();
    c3 = c1+c2;
    c3.display();


}