#include<bits/stdc++.h>
using namespace std;

int main()
{
    string text;
    string pattern;
    cin>>text;
    cin>>pattern;
    // int n=strlen(t);
    // int m=strlen(p);
    int n=0,m=0;
    while(text[n]!=0){
        n++;
    }
     while(pattern[m]!=0){
        m++;
    }
    int i,j;
    int d=10;
    int t=0;
    int q=13;
    int p=0;
    int h=1;
    for(int i=0;i<m-1;i++){
        h=(h*d)%q;
    }
    //cout<<h<<endl;
    for(int i=0;i<m;i++){
        p=(p*d+pattern[i])%q;
         t=(t*d+text[i])%q;
    }
    for(i=0;i<n-m;i++){
     if(p==t){
        for(j=0;j<m;j++){
          if(text[i]!=pattern[i]){
            break;
          }
        }
     }
    

    if(j==m){
        cout<<"Pattern is found at "<<i+1<<endl;
    }
    
    if (i < n - m) {
      t = (d * (t - text[i] * h) + text[i + m]) % q;

      if (t < 0)
        t = (t + q);
    }
}
    return 0;
}
