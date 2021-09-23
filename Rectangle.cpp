#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
        int l;
        int b;
        int area1;
    public:
        void input()
        {
            cout<<"Enter Length and Breadth"<<endl;
            cin>>l>>b;
        }
        void area()
        {
            area1 = l*b;
        }
        Rectangle compare(Rectangle);
        void display()
        {
            cout<<"Greater area is "<<area1<<endl;
        }
};

Rectangle Rectangle :: compare(Rectangle t)
{
    Rectangle r;
    if(area1>t.area1)
        r.area1= area1;
    else
    {
        r.area1 = t.area1;
        return r;
    }
} 

int main()
{
    Rectangle r1, r2, r3;
    r1.input();
    r2.input();
    r1.area();
    r2.area();
    r3= r1.compare(r2);
    r3.display();

} 