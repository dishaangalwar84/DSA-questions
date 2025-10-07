#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,j=0;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int a[n],b[n];
    cout<<"enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            b[j++]=a[i];   
            // this copies the element of a to b but the elements are not removed it stays in array a does not get removed from array a.
        }
    }
    b[j++]=a[n-1];
    cout<<"the final array is:"<<endl;
    for(i=0;i<j;i++) 
    // here we used j because we dont want the extra grabage to print at the end 
    {
        cout<<b[i]<<endl;
    }
    return 0;
}