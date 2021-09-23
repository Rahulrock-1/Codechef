#include<iostream>
using namespace std;

int main()
{
    // char arr[100];
    int n;
    cin>>n;
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i = 0;
    int currlen = 0, maxLen = 0;
    int st=0, maxst = 0;
    while(i<n)
    {
        if(arr[i] ==' ' || arr[i] == '\0')
        {
            if(currlen > maxLen)
            {
                maxLen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i+1;
        }
        else
            currlen++;
        if(arr[i] == '\0')
            break;
        i++;
    }
    cout<<maxLen<<endl;
    for(int i =0; i<maxLen; i++)
        cout<<arr[i+maxst]<<endl;
    return 0;

}