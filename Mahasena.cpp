#include<iostream>

using namespace std;

int main()
{
    int n,count=0,count1=0;
    int a[n];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            count++;
        }
        else
        {
            count1++;
        }

    }
    if(count>count1)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else if(count==count1)
    {
        cout<<"NOT READY"<<endl;
    }
    else
    {
        cout<<"NOT READY"<<endl;
    }
    return 0;
}
