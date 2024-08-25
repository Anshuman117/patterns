#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j >i; j--)
        {
            if (i==0||i==n-1)
            {
                cout<<"*";
            }
            else if (j==0|| )
            {
                /* code */
            }
            
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
}
