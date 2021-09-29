#include<bits/stdc++.h>
using namespace std;

class student
{
    string name;
    public:
    
    int age;
    bool gender;

    student()
    {
        cout<<"Default Constructor"<<endl;
    }// default constructor

    student(string s, int a, bool g)
    {
        cout<<"Parameterised Constructor"<<endl;
        name = s;
        age = a;
        gender = g;
    }// parameterised constructor

    student(student &a)
    {
        cout<<"Copy Constructor"<<endl;
        name = a.name;
        age = a. age;
        gender = a.gender;
    }//Copy constructor

    ~student()
    {
        cout<<"Destructor called"<<endl;
    }

    bool operator ==(student &a)
    {
        if(name ==a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }//opeartor Overloading.

    void setName(string s)
    {
        name = s;
    }
    void getName()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }
    void printinfo()
    {
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
    }
};

int main()
{
    student a("Rahul", 22, 1);
    // a.getName();
    a.printinfo();
    student b;
    student c = a;
    c.printinfo();

    if(c == a)
    {
        cout<<"same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }

    // student arr[3];
    // for(int i =0; i<3; i++)
    // {
    //     cout<<"Name = ";
    //     string s;
    //     cin>>s;
    //     arr[i].setName(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }
    // for(int i = 0; i<3; i++)
    // {
    //     arr[i].printinfo();
    // }
    // return 0;
}
