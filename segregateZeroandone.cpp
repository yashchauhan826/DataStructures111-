#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  int countZero=0;
  //int countOne;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   for(int i=0;i<n;i++){
    if(arr[i]==0){
        countZero++;
    }
    // else{
    //     countOne++;
    // }
   }
   for(int i=0;i<countZero;i++){
    cout<<0<<" ";
   }
   for(int i=countZero;i<n;i++){
    cout<<1<<" ";
   }

}