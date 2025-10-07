#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,index=0;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            a[index++]=a[i];
        }
    }
    for(i=index;i<n;i++)
    {
        a[i]=0;
    }
    cout<<"the final array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}