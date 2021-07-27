#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(25);
    v.push_back(5);
    v.push_back(11);
    v.push_back(1);

    //sort Assending to decending.

    sort(v.begin(), v.end());

    v.pop_back();

    int k = (int)v.size();


    for(int i = 0; i<k; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
