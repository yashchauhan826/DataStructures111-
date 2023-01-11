#include<bits/stdc++.h>
using namespace std;

int main()
{
    //concatinate two string
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    // string s3=s1+s2;
    // cout<<s3<<endl;
    int i=0;
    int j=0;
    while(s1[i]!=0){
        i++;
    }
     
    while(s2[j]!=0){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
   
   for(int k=0;k<i;k++){
     cout<<s1[k];
   }


   cout<<s1<<endl;  //not reflect in base string
    

     return 0;
}


// //n-concate
// int main()
// {
//     //concatinate two string
//     string s1;
//     string s2;
//     int n;
//     cin>>s1;
//     cin>>s2;
//     cin>>n;
//     // string s3=s1+s2;
//     // cout<<s3<<endl;
//     int i=0;
//     int j=0;
//     while(s1[i]!=0){
//         i++;
//     }
//     int temp=i;
//     while(s2[j]!=0){
//         s1[i]=s2[j];
//         i++;
//         j++;
//     }
//    for(int k=0;k<temp+n;k++){
//      cout<<s1[k];
//    }
//    s1[i]='\0';
//    cout<<s1<<endl;  //not reflect in base string
    

//     return 0;
// }


// //n-concate
// int main()
// {
//     //concatinate two string
//     string s1;
//     string s2;
//     int n;
//     cin>>s1;
//     cin>>s2;
//     cin>>n;
//     // string s3=s1+s2;
//     // cout<<s3<<endl;
//     int i=0;
//     int j=0;
//     while(s1[i]!=0){
//         i++;
//     }
//     int temp=i;
//     while(s2[j]!=0 && n>0){
//         s1[i]=s2[j];
//         i++;
//         j++;
//         n--;
//     }
//    for(int k=0;k<i;k++){
//      cout<<s1[k];
//    }
//    s1[i]='\0';
//    //cout<<s1<<endl;  //not reflect in base string
    

//     return 0;
// }


