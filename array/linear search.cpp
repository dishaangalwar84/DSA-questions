#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,b;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the value to be found:"<<endl;
    cin>>b;
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            cout<<"the value is found at"<<i<<"index"<<endl;
            break;
        }
    }
    return 0;
}