// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int temp=arr[0];
//     for(int i=0;i<n;i++){
//         arr[i]=arr[i+1];

//     }
//     arr[n-1]=temp;
//     for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void reverse(int start,int end,int a[]){
  
 while(start<=end){
  swap(a[start],a[end]);
  start++;
  end--;
 }
}
int main()
{
    int n;
    cin>>n;
    int d;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(0,n-1,arr);
//    for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    reverse(0,d-1,arr);
    reverse(d,n-1,arr);

     
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

