#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    cin>>s1;
   int n=s1.size();

    int start=0;
    int end=n-1;
    while(start<=end){
        swap(s1[start],s1[end]);
        start++;
        end--;
    }
    cout<<s1<<endl;
    return 0;
}
