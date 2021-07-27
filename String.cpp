#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the name which you want to find: "<<endl;
    cin>>n;
    string s1, s2, s3, s4;
    cout<<"enter your name: "<<endl;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    cin>>s4;
    if(s1 == "prince")
        cout<<"yes present in s1"<<endl;
    else if(s2 == "prince")
        cout<<"yse present in s2"<<endl;
    else if(s3 == "prince")
        cout<<"yes present in s3"<<endl;
    else if(s4 == "prince")
        cout<<"yes present in s4"<<endl;
    else
        cout<<"no"<<endl;
}
