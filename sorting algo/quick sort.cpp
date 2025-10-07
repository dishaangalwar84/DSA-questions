#include <bits/stdc++.h>
using namespace std;
int part(vector<int>&arr,int low, int pivort,int high)
{
    int temp,i,j;
     i=low;
     j=high;
    while(j>i)
    {
        if(arr[i]>pivort && arr[j]<pivort)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
        else{
            i++;
            j--;
        }
    }
    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}
int quicksort(vector<int>&arr,int low, int high)
{
    if(low>=high)
    {
        return 1;
    }
    int pivort=arr[low];
     pivort=part(arr,low,pivort,high);
    quicksort(arr,low,pivort-1);
    quicksort(arr,pivort+1,high);
}
int main()
{
    int n,i;
    cout<<"enter the size of vector:"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"the sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}