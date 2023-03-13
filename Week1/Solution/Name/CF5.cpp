#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,f,g,h,j,i;
        string s;
        cin>>n;
        cin>>s;
    
        c=0;f=0;g=0;h=0;j=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='T')
                c++;
            if(s[i]=='i')
                f++;  
            if(s[i]=='m')
                g++;
            if(s[i]=='u')
                h++; 
            if(s[i]=='r')
                j++;     
        }
        if(c==1 && f==1 && g==1 && h==1 && j==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;   
    }
    return 0;
}