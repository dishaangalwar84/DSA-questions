// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,j=0,n,d;
//     cout<<"enter the size of the array:"<<endl;
//     cin>>n;
//     cout<<"enter the places that you want to rotate:"<<endl;
//     cin>>d;
//     int a[n],b[d];
//     cout<<"enter the elements of the array:"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<d;i++)
//     {
//         b[i]=a[i];
//     }
//     for(i=d;i<n;i++)
//     {
//         a[i-d]=a[i];
//     }
//     for(i=n-d;i<n;i++)
//     {
//         a[i]=b[j++];
//     }
//     cout<<"the rotated array is:"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }
// this is the bruteforce solution.
#include <bits/stdc++.h>
using namespace std;
void leftrotate(int arr[],int n, int d)
{
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main()
{
    int n,d,i;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    cout<<"enter the value of d:"<<endl;
    cin>>d;
    int arr[n];
    cout<<"enter the elements of the array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    leftrotate(arr,n,d);
    cout<<"the final array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
// this is the optimal method.