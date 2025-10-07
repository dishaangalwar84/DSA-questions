#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,b;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b=a[0];
    i=1;
    while(i<n)
    {
        if(a[i]>b)
        {
            b=a[i];
        }
        i++;
    }
    cout<<"the largest element is:"<<b<<endl;
    return 0;

}