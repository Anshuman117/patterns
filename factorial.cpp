#include<iostream>
using namespace std;
int main()
{
    int n;
    int c=1;
    cout<<"enter a number";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        c=c*i;
    }
    
    cout<<"the factorial is"<<c;
    
}
