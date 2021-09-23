//using recursion

#include<bits/stdc++.h>
using namespace std;

void towerofHanoi(int n, char s, char d, char h)
{
    if(n == 0)
        return;

    towerofHanoi(n-1, s, h, d);
    cout<<"Move from "<<s<<" to "<<d<<endl;
    towerofHanoi(n-1, h, d, s);
}

int main()
{
    int n;
    cin>>n;
    char s = 'A';
    char d = 'C';
    char h = 'B';
    towerofHanoi(n,s, d, h);
}