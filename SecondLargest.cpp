#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        vector<int> v;
        int a, b, c;
        cin>>a>>b>>c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        int k = (int) v.size();
        for( int i = 0; i<k; i++)
        {
            if(i == 1)
                cout<<v[i]<<endl;
        }
    }
    return 0;
}
