#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,b;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b=a[0];
    for(i=1;i<n;i++)
    {
        a[i-1]=a[i];
    }
    a[n-1]=b;
    cout<<"the final array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}