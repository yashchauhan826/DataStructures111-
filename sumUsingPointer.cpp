#include<bits/stdc++.h>
using namespace std;
void sum(int *ptr, int n)
{
    int i, s=0;
    for(i=0;i<n;i++)
    {
        s=s+(*ptr+i);
    }
    cout<<s<<endl;
}
int main()
{
    int a[]={7,8,9};
    int n= sizeof(a)/sizeof(a[0]);
    sum(a,n);
}