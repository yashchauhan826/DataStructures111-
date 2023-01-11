#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     string s[n];
//     for(int i=0;i<n;i++){
//         cin>>s[i];
//     }
//     string temp;
//      for(int i=0;i<n;i++){
//        for(int j=0;j<n-i-1;j++){
//         if(s[j]>s[j+1]){
//             //  temp = s[j];
//             //  s[j] = s[j + 1];
//             //  s[j + 1] = temp;
//             swap(s[j],s[j+1]);
//         }
//        }
//     }

//     for(int i=0;i<n;i++){
//         cout<<s[i]<<endl;
//     }
//     return 0;
// }


int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    sort(s,s+n);
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
