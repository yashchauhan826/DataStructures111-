#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=0;
    while(i<n && j<n){
        if(arr[i]<0 && arr[j]<0){
            j++;
            i++;
        }
        if(arr[i]>0 && arr[j]>0){
            j++;
        }
        else{
            swap(arr[i],arr[j]);
            i++;
            j++;
        }
        
    }

    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }

}