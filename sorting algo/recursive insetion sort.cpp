#include <bits/stdc++.h>
using namespace std;
void rinsertion(vector<int>&arr,int i,int j,int n)
{
    int key;
    key=arr[n-1];
    j=n-2;
    if(i==n)
    {
        return ;
    }
    rinsertion(arr, i, j, n-1);
    while(j>=0 && arr[j]>key )
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
}
int main()
{
    int n,i;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rinsertion(arr,0,1,n);
    cout<<"the sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
    
}