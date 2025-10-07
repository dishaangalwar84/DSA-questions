#include <bits/stdc++.h>
using namespace std;
void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int i,j,a[n];
    cout<<"enter the elements of array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            swap(a[i],a[j]);
            }
        }
    }
    cout<<"the sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}