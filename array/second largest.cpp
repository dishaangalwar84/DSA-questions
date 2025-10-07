#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,b,c=INT_MIN;
    cout<<"enter the size of the array"<<endl;
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
            c=b;
            b=a[i];   
        }
        i++;
    }
    cout<<"the second largest element is:"<<c<<endl;
    return 0;
}