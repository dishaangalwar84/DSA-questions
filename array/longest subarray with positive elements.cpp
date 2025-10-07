#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,k;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    cout<<"enter the value of k:"<<endl;
    cin>>k;
    int a[n],count=0,sum=0,maxi=0;
    cout<<"enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        count++;
        if(sum==k)
        {
            sum=0;
            if(count>maxi)
            {

                maxi=count;
            }
        }
    }
    cout<<"the longest subarray has:"<<maxi;
    return 0;

}