#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    int c;
    cin>>T;
    while(T--)
    {
        vector<int> v;
        int n;
        cin>>n;
        v.push_back(n);
        sort(v.begin(),v.end());
        int k = (int) v.size();
        for(int j = 1; j<=k; j++)
            cout<<j<<endl;

    }
}
