#include<bits/stdc++.h>
using namespace std;
//Intersection of two array
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    vector<int>v1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<m;i++){
        cin>>b[i];
    }
    set<int>s1;
     for(int i=0;i<n;i++){
        s1.insert(a[i]);
    }
     for(int i=0;i<m;i++){
        if(s1.find(b[i])!=s1.end()){
            v1.push_back(b[i]);
            s1.erase(b[i]);
        }
    }
     for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }
    return 0;
}
