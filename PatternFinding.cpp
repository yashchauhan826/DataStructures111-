#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    string pattern;
    cin>>str;
    cin>>pattern;
    int i=0,j=0;
    while(i<str.size()){
        while(j<pattern.size()){
           if(str[i]==pattern[j]){
             i++;
             j++;
           }
           else{
             i++;
           }
        }
        if(j==pattern.size()){
            cout<<"Found"<<endl;
            cout<<i-j<<" "<<i<<endl;
            break;
        }
    }

    // }
    //     for(int i=0;i<str.size();i++){
    //      for (j = 0; j < pattern.size(); j++)
    //         if (str[i + j] != pattern[j])
    //             break;
 
    //     if (j == pattern.size()){ // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
    //         cout << "Pattern found at index " << i << endl;
    // }

    // }
     return 0;
}
