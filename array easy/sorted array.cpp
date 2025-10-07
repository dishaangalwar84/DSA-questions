#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,b,count=0;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array(unique elements)"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>b ||b==a[i])
        {
            count++;
            b=a[i];
        }
    }
    if(count==(n-1))
    {
        cout<<"array is sorted"<<endl;
    }
     else if(count<(n-1) || count==0)
    {
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}