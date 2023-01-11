// #include<bits/stdc++.h>
// using namespace std;
// //row sum using pointer
// int main()
// {
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     int *ptr;
//     for(int i=0;i<n;i++){
//        for(int j=0;i<m;i++){
//         cin>>a[i][j];
//        }
//     }
//     int sum;
//     for(int i=0;i<n;i++){
//         sum=0;
      
//         for(int j=0;j<m;j++){
             
//             sum+=(*(*(a+j)+i));
//         }
//         cout<<sum<<" ";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
//col sum using pointer
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    
    for(int i=0;i<n;i++){
       for(int j=0;i<m;i++){
        cin>>a[i][j];
       }
    }
    int sum;
    for(int i=0;i<n;i++){
        sum=0;
      
        for(int j=0;j<m;j++){
             
            sum+=(*(*(a+j)+i));
        }
        cout<<sum<<" ";
    }
    return 0;
}
