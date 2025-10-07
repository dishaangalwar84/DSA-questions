#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i=0,j=0,k=0;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    m=n;
    int d=n+n;
    int a[n],b[m],c[d];
    cout<<"enter the elements of array a in sorted manner:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the elements of array b in sorted manner:"<<endl;
     for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    while(i<n && j<m)
    {
        if(a[i]<=b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    while(i<n)
    {
        c[k++]=a[i++];
    }
    while(j<m)
    {
        c[k++]=b[j++];
    }
    cout<<"the final array is:"<<endl;
    for(i=0;i<k;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;
}