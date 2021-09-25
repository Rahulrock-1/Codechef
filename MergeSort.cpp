#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];  //a & b two temp array.
    for(int i =0; i<n1; i++)
    {
        a[i] = arr[l+i];
    } 
    for(int i = 0; i<n2; i++)
    {
        b[i] = arr[mid+1+i];
    }
    int i = 0;
    int j = 0;
    int k = l;

    while(i<n1 && j<n2)
    {
        if(a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else{
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void MergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        MergeSort(arr, l, mid);
        MergeSort(arr, mid+1, r);

        Merge(arr,l, mid, r);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    // int arr[] = {5, 4, 3,2,1};
    MergeSort(arr, 0, n);
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
