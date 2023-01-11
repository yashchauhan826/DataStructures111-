#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v1;
    int i=0,j=0;
    for(int i=0;i<n;i++){
        j=i+1;
        int t=0;
    while(j<n){
       
        if(a[i]<a[j]){
            v1.push_back(a[j]);
            t=1;
            break;
        }
        else{
        j++;
        }
        
    }
    if(t==0){
        v1.push_back(0);
    }
    }
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    int x=n-v1.size();
   
    return 0;
}
