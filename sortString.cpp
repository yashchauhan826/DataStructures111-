#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     string s;
//     cin>>s;
//     int n=0;
//     char temp;
//     while(s[n]!=0){
//         n++;
//     }
//     for(int i=0;i<n;i++){
//        for(int j=0;j<n-i-1;j++){
//         if(s[j]>s[j+1]){
//              temp = s[j];
//              s[j] = s[j + 1];
//              s[j + 1] = temp;
//         }
//        }
//     }
//     cout<<s<<endl;
//     return 0;
// }


int main()
{
    string s; 
    cin>>s;
    vector<int>v1(256,0);
    for(int i=0;i<s.size();i++){
        v1[s[i]]++;
    }
   s="";
    for(int i=0;i<256;i++){
        for(int j=0;j<v1[i];j++){
           s=s+(char)i;
        }
    }

    
    cout<<s<<endl;
    return 0;
}
