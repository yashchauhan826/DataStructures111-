#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //Method-1
    // //bitwise operator---->AND
    // if(n&1==1){
    //     cout<<"Odd"<<endl;
    // }
    // else{
    //     cout<<"Even"<<endl;
    // }

    //Method-2
    // //bitwise operator---->OR
    // if(n|1>n){
    //     cout<<"Even"<<endl;
    // }
    // else{
    //     cout<<"Odd"<<endl;
    // }

    //Method-3
    //Bitwise operator--->XOR
    if(n ^ 1 == (n+1)){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }


    return 0;
}
