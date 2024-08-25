#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three numbers";
    cin>>a>>b>>c;
    if (a>b&&b>c)
    {
        cout<<a<<" is greatest number";
    }
    else if (b>c)
    {
        cout<<b<<"is greatest number";
    }
    else{
        cout<<c<<"is greatest number";
    }
    
    
}