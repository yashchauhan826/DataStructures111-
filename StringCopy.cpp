#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    char s2[100];
    cin>>s1;
    int i=0;
    //int j=0;
    while (s1[i]!=0)
    {
      s2[i]=s1[i];
      i++;
      
    }
    s2[i] = '\0';
    cout<<s1<<endl;
    cout<<s2<<endl;
    
    return 0;
}
