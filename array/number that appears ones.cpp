// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int i,n,result=0;
//     cout<<"enter the size of the array:"<<endl;
//     cin>>n;
//     int a[n];
//     cout<<"enter the elements of the array:"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<n-2;i++)
//     {
//         result^=a[i];
 
//     }
//     cout<<"the element that appears once is:"<<result<<endl;
//     return 0;
// }
// this is the optimal method.
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,i;
//     cout<<"enter the size of the array:"<<endl;
//     cin>>n;
//     int a[n],hash[n]={0};
//     cout<<"enter the elements of the array:"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     for(i=0;i<n;i++)
//     {
//         hash[a[i]]++;
//     }
//     for(i=0;i<n;i++)
//     {
//         if(hash[i]==1)
//         {
//             cout<<"the element that appears once is:"<<i;
//             break;
//         }
//     }
//     return 0;
// }
// this is the better approach.