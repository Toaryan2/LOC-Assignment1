#include<iostream>
using namespace std;
int main()
{
    int tot;
    cin>>tot;
    int count=0;
    while(tot--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==1 && b==1 && c==1)
        count++;
        else if(a==1 && b==1 )
        count++;
        else if(b==1 && c==1 )
        count++;
        else if(a==1 && c==1 )
        count++;
    }
    cout<<count<<endl;
    return 0;
    
}