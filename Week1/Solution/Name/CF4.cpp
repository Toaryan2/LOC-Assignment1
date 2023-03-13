#include<iostream>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    int a[n];
    int count=0;
    for( i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(a[k]!=0)
    {
    for(i=1;i<=n;i++)
    {
        if(a[k]<=a[i])
        count++;
    }
    }
    else 
    for(i=1;i<=n;i++)
    {
        if(a[k]<a[i])
        count++;
    }
    cout<<count;
   return 0; 
}