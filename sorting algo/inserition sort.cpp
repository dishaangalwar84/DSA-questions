#include <bits/stdc++.h>
using namespace std;
void swap(int &x, int &y)
{
    int temp=x;
    x=y;
    y=temp;
}
// here we have used call by reference because we originally want to change the values and not there copies when we use call by value the copies are send to the function and then swapped but the swap values comes to there original position once we are out of the loop.
int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int i,j,a[n];
    cout<<"enter the elements or array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=0;
        for(j=1;j<n;j++)
        {
            for(int k=j-1, l=j; k>=i && l>k;k--,l--)
            if(a[k]>a[l])
            {
                swap(a[k],a[l]);

            }
        }
    cout<<"the soreted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}