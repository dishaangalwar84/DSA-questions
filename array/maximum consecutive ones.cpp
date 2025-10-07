#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,count=0,maxcount=0;
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
        if(a[i]==1)
        {
            count++;
            maxcount=max(maxcount,count);
        }
        else{
            count=0;
        }
    }
    cout<<"the maximum consecutive ones are:"<<maxcount<<endl;
    return 0;

}