#include<bits/stdc++.h>
using namespace std;
//Aritmetic Progression-
int main()
{
    int a[]={11,12,13,14,16};
    int n=sizeof(a)/sizeof(a[0]);
   // cout<<n<<" ";
  // int n=5;



//     int tot_sum=((n+1)/2) *(2*a[0]+(n));
//     int sum=0;
//     for(int i=0;i<n;i++){
//        sum+=a[i];
//     }
//    int res=tot_sum-sum;
//     cout<<res<<endl;



//Method-2
int ac=a[0];
int b=a[n-1];
int k=0;
int res;
for(int i=ac;i<b;i++){
    if(a[k]!=i){
       res=i;
       break;
    }
    k++;
}

cout<<res;
    return 0;
}
