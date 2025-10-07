// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,n;
//     cout<<"enter the size of the array:"<<endl;
//     cin>>n;
//     int  a[n],b=1;
//     cout<<"enter the elements of the array in sorted order:"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<n;i++)
//     {
//         if(a[i]!=b)
//         {
//             cout<<"the missing element is:"<<b<<endl;
//             break;
//         }
//             b++;
//     }
//     return 0;
// }
// this was the bruteforce solution.
// 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,s1=0;
    cout<<"enter the size of the array:"<<endl;
    cin>>n;
    int m[n+1], a[n];
    cout<<"enter the values of m in sorted order:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>m[i];
        sum+=m[i];
    }
    cout<<"enter the elements of array in sorted order:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s1+=a[i];
    }
    cout<<"the missing element is:"<<sum-s1;
    return 0;

    
}
