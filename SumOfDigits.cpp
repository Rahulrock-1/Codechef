# include<iostream>
#include<sstream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        ostringstream str1;
        str1<<n;
        string s = str1.str();
        int len = s.length();
        long long int sum = 0;
        for(int i =0; i<len; i++)
        {
            char x= s[i];
            int p =x;
            p = p-48;
            sum = sum+p;
        }
        cout<<sum<<endl;
    }
}
