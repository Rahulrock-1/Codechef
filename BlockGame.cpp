#include<iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,s,sum = 0,temp;
        cin>>n;
        temp=n;
        while(n>0)
        {
            s=n%10;
            sum = (sum*10)+s;
            n = n/10;
        }
            if(temp==sum)
            {
                cout<<"wins"<<endl;
            }
            else
            {
                cout<<"loses"<<endl;
            }
    }
}
