#include<bits/stdc++.h>
using namespace std;
int FirstOccurrence(int a[],int key,int n){
//int n=sizeof(a)/sizeof(a[0]);
int start=0;
int end=n-1;
int result;
while(start<=end){
    int mid=(start+end)/2;
    if(a[mid]==key){
      result=mid;
      end=mid-1;
    }
    else if(a[mid]>key){
        end=mid-1;
    }
    else if(a[mid]<key){
        start=mid+1;
    }
}
return result;
}
int LastOccurrence(int a[],int key,int n){
//int n=sizeof(a)/sizeof(a[0]);
int start=0;
int end=n-1;
int result;
while(start<=end){
    int mid=(start+end)/2;
    if(a[mid]==key){
      result=mid;
      start=mid+1;
    }
    else if(a[mid]>key){
        end=mid-1;
    }
    else if(a[mid]<key){
        start=mid+1;
    }
}
return result;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cout<<("Tell the number whose count you would like to find");
    cin>>key;
    sort(a,a+n);
    int left=FirstOccurrence(a,key,n);
    int right=LastOccurrence(a,key,n);
    int res=right-left+1;
    cout<<res;


    return 0;
}
