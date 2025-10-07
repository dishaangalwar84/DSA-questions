#include <bits/stdc++.h>
using namespace std;
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int bubble(vector<int>&a, int i, int j,int n)
{
    if(i==n)
    {
        return 1;
    }
    if (j == n) {       // end of one pass
        bubble(a, 0, 1, n - 1); // reset indices, shrink range the biggest number is at the end 
        return 1;
    }
    bubble(a,i+1,j+1,n);
    if(a[i]>a[j])
    {
    swap(a[i],a[j]);
    }
}
int main()
{
    int n,i;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int>a(n);
    cout<<"enter the elements of array"<<endl;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble(a,0,1,n);
    cout<<"the sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
